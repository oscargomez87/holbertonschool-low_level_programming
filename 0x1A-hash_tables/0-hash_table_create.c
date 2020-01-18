#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 *
 * @size: size of hash table
 * Return: NULL if creation fails, pointer to the hash table otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *htable;

	htable = malloc(sizeof(size) + sizeof(hash_node_t **));
	if (htable == NULL)
		return (NULL);
	htable->(*array) = malloc(size * sizeof(hash_node_t *));
	if (htable->(*array) == NULL)
		return (NULL)
	htable->size = size;
	return (htable);
}
