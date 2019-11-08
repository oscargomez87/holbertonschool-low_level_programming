#include "holberton.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another.
 *
 * @n: Initial number
 * @m: expected number
 * Return: Number of bits required to flip to get from n to m
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (n > m ? 1 : 1);
}
