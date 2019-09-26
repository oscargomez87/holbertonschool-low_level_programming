#include "holberton.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: times must be printed
 */
void print_line(int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i > 0)
		_putchar('-');
	}
	_putchar('\n');
}
