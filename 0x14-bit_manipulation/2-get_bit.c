 #include "holberton.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 *
 * @n: value to search bit into
 * @index: point to print bit from
 * Return: bit in given index, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if ((n == 0 && index > 0) || index > 63)
		return (-1);
	return (n & (1 << index) ? 1 : 0);
}
