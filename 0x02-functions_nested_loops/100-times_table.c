#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void print_times_table(int n)
{
	int i, j, m;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < 10; j++)
		{
			m = i * j;
			if (i == 0 && j != 0)
			{
				if (i > 0)
				{
					_putchar(m / 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(m / 10 + '0');
				}
			} else if (j == 0 || (i > 0 && j == 0))
			{
				_putchar(m / 10 + '0');
			} else if (i > 0 && j >  0 && m / 10 != 0)
			{
				_putchar(m / 10 + '0');
				_putchar(m % 10 + '0');
			} else if (i > 0 && j >  0 && m / 10 == 0)
			{
				_putchar(' ');
				_putchar(m % 10 + '0');
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
