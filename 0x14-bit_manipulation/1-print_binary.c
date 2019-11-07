#include "holberton.h"

void print_binary(unsigned long int n)
{
	char s[255];
	int i = 0;
	if (n == 0)
		_putchar('0');
	while (n > 0)
	{
		s[i] = ((n & 1) == 0 ? '0' : '1');
		n >>= 1;
		i++;
	}
	s[i] = '\0';
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
}
