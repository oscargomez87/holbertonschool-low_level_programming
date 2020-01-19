#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 *
 * @ht: hash table to print
 *
 **/
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned int i, cflag = 0;

	if (ht == NULL)
	{
		return;
	}
	printf("{");
	for (i = 0; i <= ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (cflag == 0)
				{
					printf("'%s': '%s'", temp->key, temp->value);
					cflag = 1;
				}
				else
					printf(", '%s': '%s'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
