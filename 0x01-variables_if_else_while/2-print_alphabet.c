#include <stdio.h>
/*
 *
 */

/**
 * main - prints the alphabet
 *
 * Return: Returns 0 when succesful
 */
int main(void)
{
	char c;
	int i = 97;

	do {
		c = i;
		putchar(c);
		i++;
	} while (i < 123);
	putchar('\n');
	return (0);
}
