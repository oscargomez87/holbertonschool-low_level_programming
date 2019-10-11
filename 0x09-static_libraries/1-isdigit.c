#include "holberton.h"

/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: digit to evaluate
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
		i = 1;
	else
		i = 0;
	return (i);
}
