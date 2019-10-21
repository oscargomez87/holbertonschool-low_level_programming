#include <stdio.h>
#define name __FILE__

/**
 * main - Prints the name of the file the program was
 * compiled from
 * Return: 0 when successful
 */
int main(void)
{
	printf("%s\n", name);
	return (0);
}
