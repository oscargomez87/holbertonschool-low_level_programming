#include "holberton.h"
void _spaces(int);
void _rows(int);

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size: size of triangle
 */
void print_triangle(int size)
{
	int i;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			_spaces(size - i);
			_rows(i + 1);
		}
	} else
		_putchar('\n');
}

/**
 * _spaces - print spaces
 * @n: number of spaces
 */
void _spaces(int n)
{
	int i;

	for (i = 1; i < n; i++)
		_putchar(' ');
}

/**
 * _rows - print the rows of the triangle using #
 * @n: length of the row
 */
void _rows(int n)
{
	int i = 0;

	do {
		_putchar('#');
		i++;
	} while (i < n);
	_putchar('\n');
}
