#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to a hash table
 *
 * @ht: hash table to add element into
 * @key: index of the hash table to add element into
 * @value: value to add in the hash table
 * Return: 1 if succeeds, 0 otherwise
 *
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	unsigned long int kindex;

	if (ht == NULL)
		return (0);
	if (key == NULL || *key == '\0' || value == NULL)
		return (0);
	kindex = key_index((unsigned char *)key, 1024);
	temp = ht->array[kindex];
	ht->array[kindex] = malloc(sizeof(hash_node_t));
	if (ht->array[kindex] == NULL)
		return (0);
	ht->array[kindex]->key = key;
	ht->array[kindex]->value = strdup(value);
	if (ht->array[kindex]->value == NULL)
	{
		free(ht->array[kindex]);
		return (0);
	}
	ht->array[kindex]->next = temp;
	return (1);
}
