#include "holberton.h"
#include <string.h>

/**
 * print_rev - prints a string in reverse
 * @s: string to print
 */
void print_rev(char *s)
{
	int i = strlen(s);

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
