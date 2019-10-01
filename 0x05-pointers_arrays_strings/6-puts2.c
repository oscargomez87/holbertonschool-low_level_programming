#include "holberton.h"

/**
 * puts2 - rints every other character of a string
 * @str: string to process
 */
void puts2(char *str)
{
	int i = 0, j;

	while (str[i])
		i++;
	i--;
	while (j <= i)
	{
		_putchar(*(str + j));
		j = j + 2;
	}
	_putchar('\n');
}
