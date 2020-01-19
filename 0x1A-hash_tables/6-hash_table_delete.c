#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 *
 * @ht: hash table to delete
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *temp = NULL;
	unsigned int i = 0;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			free(current->key);
			free(current->value);
			temp = current;
			current = current->next;
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
