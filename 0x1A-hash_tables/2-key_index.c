#include "hash_tables.h"

/**
 * key_index - Gives the index of a  key
 *
 * @key: key to get index
 * @size: size of the hash table array
 * Return: the index of the key
 *
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int kindex;

	kindex = hash_djb2(key);
	kindex = kindex % size;
	return (kindex);
}
