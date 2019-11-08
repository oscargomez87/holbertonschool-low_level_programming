#include "holberton.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index.
 *
 * @n: number to set value of bit
 * @index: position to set the value of bit to 1
 * Return: 1 when successful, -1 otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (!(*n & (1 << index)))
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (-1);
}
