#include <stdio.h>
#include <stdlib.h>
int _checki(char *);

/**
 * main - print the addition of positive numbers
 * @argc: number of arguments
 * @argv: arguments to add
 * Return: 0 if no arguments were passed, Error if one argument cant be added,
 * otherwise the sum of the arguments
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
		printf("0\n");
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (_checki(argv[i]))
			{
				sum += atoi(argv[i]);
			} else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}

/**
 * _checki - checks if string can be converted to int
 * @s: string to check
 * Return: 0 if argument is not number, 1 otherwise
 */
int _checki(char *s)
{
	int i = 1;

	if (*s)
	{
		if (*s < (0 + '0') || *s > (9 + '0'))
			return (0);
		i = _checki(s + 1);
	}
	return (i);
}
