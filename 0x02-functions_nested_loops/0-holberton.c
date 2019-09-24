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
	int i;

	for (i = 0; i < (int)sizeof(str); i++)
		_putchar(str[i]);
	_putchar('\n');
	return (0);
}
