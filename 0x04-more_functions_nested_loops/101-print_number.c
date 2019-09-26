#include "holberton.h"
void print_negative(int n);
void print_positive(int n);
void print_zero(int n);

/**
 * print_number - prints an integer
 * @n: integer to print
 */
void print_number(int n)
{
	print_zero(n);
	if (n < 0)
		print_negative(n);
	else if (n > 0)
		print_positive(n);
}

/**
 * print_negative - transform negative to positive, then calls print_positive
 * @n: integer to transform
 */
void print_negative(int n)
{
	_putchar(45);
	n *= -1;
	print_positive(n);
}

/**
 * print_positive - prints positive integer
 * @n: integer to print
 */
void print_positive(int n)
{
	if (n != 0)
	{
		print_positive(n / 10);
		_putchar((n % 10) + '0');
	}
}

/**
 * print_zero - if the integer is equal to 0 prints 0
 * @n: integer to print
 */
void print_zero(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
}
