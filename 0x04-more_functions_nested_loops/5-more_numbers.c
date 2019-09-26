#include "holberton.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by a new line
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 9; j++)
	{
		for (i = 0; i < 15; i++)
		{
			_putchar((i > 9 ? (i / 10 + '0') : (i + '0')));
			if (i > 9)
				_putchar((i % 10) + '0');
		}
		_putchar('\n');
	}
}
