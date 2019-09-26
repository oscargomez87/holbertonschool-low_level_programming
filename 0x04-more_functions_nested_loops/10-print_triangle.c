#include "holberton.h"
void _spaces(int);
void _rows(int);

/**
 *
 *
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
 *
 */
void _spaces(int n)
{
	int i;

	for (i = 1; i < n; i++)
		_putchar(' ');
}

/**
 *
 */
void _rows(int n)
{
        int i = 0;
        do
	{
		_putchar('#');
		i++;
	}while (i < n);
	_putchar('\n');
}
