#include <stdio.h>

/**
 * main - prints the numbers of arguments passed to the program
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	if (argc <= 1)
		printf("%d\n", 0);
	else
		printf("%d\n", argc - 1);
	return (0);
}
