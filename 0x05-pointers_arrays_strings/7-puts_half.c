#include "holberton.h"

/**
 * puts_half - prints half of a string, followed by a new line
 * @str: string to process
 */
void puts_half(char *str)
{
	int i = 0, j;

	while (*(str + i) != '\0')
		i++;
	if (i % 2 == 0)
	{
		for (j = i / 2; j < i; j++)
			_putchar(*(str + j));
		_putchar('\n');
	} else
	{
		for (j = (i - 1) / 2; j < (i - 1); j++)
			_putchar(*(str + j));
		_putchar('\n');
	}
}
