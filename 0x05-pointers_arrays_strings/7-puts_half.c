#include "holberton.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to process
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(*(str + j));
		_putchar('\n');
	} else
	{
		for (j = ((i - 1) / 2) + 1; j < i; j++)
			_putchar(*(str + j));
		_putchar('\n');
	}
}
