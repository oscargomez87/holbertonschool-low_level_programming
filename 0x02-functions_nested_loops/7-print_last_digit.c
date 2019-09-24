#include "holberton.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number to evaluate
 * Return: last digit when successful
 */
int print_last_digit(int n)
{
	int m = n;

	m = m % 10;
	if (m < 0)
		m = m * (-1);
	_putchar(m + '0');
	return (m);
}
