#include "holberton.h"
int _pow(int x, int y);
int _isdigit(int c);

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

int _isdigit(int c)
{
	int i;

	if (c >= 48 && c <= 57)
		i = 1;
	else
		i = 0;
	return (i);
}

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
