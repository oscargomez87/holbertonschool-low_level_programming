#include "holberton.h"

/**
 * _isupper - checks for uppercase character
 * @c: receives character to evaluate
 * Return: 1 if c is uppercase, 0 otherwise
 */
int _isupper(int c)
{
	int i = 0;

	if (c >= 65 && c <= 90)
		i = 1;
	else
		i = 0;
	return (i);
}
