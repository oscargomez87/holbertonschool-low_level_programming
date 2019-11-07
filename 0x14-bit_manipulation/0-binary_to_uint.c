#include "holberton.h"
int _isdigit(int);
int _pow(int, int);

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: binary number to convert
 * Return: Unsigned int representation on success, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, j = 0, sum = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
		i++;
	i--;
	while (i >= 0)
	{
		if (!_isdigit(b[i]))
			return (0);
		sum += (b[i] - '0') * _pow(2, j);
		i--;
		j++;
	}
	return (sum);
}

/**
 * _isdigit - checks if the ascii value of a char can be converted to int
 *
 * @c: acii value for a char
 * Return: 1 if successful, otherwise 0
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

/**
 * _pow - elevates a base x to the power of y
 *
 * @x: base number
 * @y: exponent
 * Return: x to the power of y
 */
int _pow(int x, int y)
{
	int i = 2, res = x * 1;

	if (y == 0)
		return (1);
	while (i <= y && i >= 0)
	{
		res = res * x;
		i++;
	}
	return (res);
}
