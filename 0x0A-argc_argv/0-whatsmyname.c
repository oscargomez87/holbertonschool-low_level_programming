#include <stdio.h>

/**
 * main - prints the program name
 * @argc: size of argument
 * @argv: argument elements
 * Return: 0 if sucessful
 */
int main(int argc __attribute__((unused)),
char *argv[] __attribute__((unused)))
{
	printf("%s\n", argv[0]);
	return (0);
}
