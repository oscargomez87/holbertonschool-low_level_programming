#include "holberton.h"
/*
 *
 */

/**
 * main - prints Holberton, followed by a new line.
 *
 * Return: 0 when successful.
 */
int main(void)
{
	char str[] = "Holberton";
	int stop = sizeof(str);
	int i;

	for (i = 0; i < stop; i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
