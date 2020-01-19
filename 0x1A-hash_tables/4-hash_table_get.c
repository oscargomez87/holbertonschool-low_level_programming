#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key.
 *
 * @ht: hash table where search will be performed
 * @key: key that will be searched in hash table
 * Return: Pointer to value in the key position, NULL otherwise
 *
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int kindex;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	kindex = key_index((unsigned char *)key, ht->size);
	temp = ht->array[kindex];
	while (temp)
	{
		if (!strcmp(temp->key, key))
			return (temp->value);
	}
	return (NULL);
}
