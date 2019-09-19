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
	int i = 97;

	do {
		putchar(i);
		i++;
	} while (i < 123);
	putchar('\n');
	return (0);
}
