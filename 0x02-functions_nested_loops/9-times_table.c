#include "holberton.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int i, j, n;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			n = i * j;
			if (i == 0 && j != 0)
			{
				if (i > 0)
				{
					_putchar(n / 10 + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(n / 10 + '0');
				}
			} else if (j == 0 || (i > 0 && j == 0))
			{
				_putchar(n / 10 + '0');
			} else if (i > 0 && j >  0 && n / 10 != 0)
			{
				_putchar(n / 10 + '0');
				_putchar(n % 10 + '0');
			} else if (i > 0 && j >  0 && n / 10 == 0)
			{
				_putchar(' ');
				_putchar(n % 10 + '0');
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
