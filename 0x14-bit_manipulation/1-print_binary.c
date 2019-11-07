#include "holberton.h"
void print_nonzero(unsigned long int);
/**
 * print_binary - Prints the binary representation of a number
 * if the number is equal to 0, otherwise call print_nonzero
 *
 * @n: number to print binary representation
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	print_nonzero(n);
}

/**
 * print_nonzero - Prints the binary representation of a number bigger than 0
 *
 * @n: number to print binary representation
 */
void print_nonzero(unsigned long int n)
{
	if (n > 0)
	{
		print_nonzero(n >> 1);
		_putchar((n & 1) + '0');
	}
}
