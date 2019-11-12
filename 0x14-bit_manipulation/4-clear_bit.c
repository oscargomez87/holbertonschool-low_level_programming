#include "holberton.h"

/**
 * clear_bit - sets the value at a given position to 0
 *
 * @n: number where value is going to be changed
 * @index: position to change value
 * Return: 1 if successful, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}
