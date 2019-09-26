#include "holberton.h"
void _espacios(int);

/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n: times must be printed
 */
void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			_espacios((i));
			_putchar('\\');
			_putchar('\n');
		}
	} else
		_putchar('\n');
}

/**
 * _espacios - Imprime espacios
 * @n: cantidad a imprimir
 */
void _espacios(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar(' ');
}
