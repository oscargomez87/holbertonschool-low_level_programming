#include <stdio.h>
/*
 * Task 4 for project 0x01-variables_if_else_while
 */

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: 0 if successful
 */
int main(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
