#include <stdio.h>
/*
 * Task 3 for project 0x01-variables_if_else_while
 */

/**
 * main - Prints alphabet in lowercase and uppercase
 *
 * Return: 0 when successful
 */
int main(void)
{
	/*char c;*/
	int i;

	for (i = 97; i < 123; i++)
	{
		putchar(i);
	}
	for (i = 65; i < 91; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
