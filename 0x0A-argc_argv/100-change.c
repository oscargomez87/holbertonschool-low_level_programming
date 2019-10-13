#include <stdio.h>
#include <stdlib.h>
int _checki(char *);

/**
 * main - prints the minimum number of coins to make change
 * for an amount of money
 * @argc: number of arguments
 * @argv: ammount of money
 * Return: 0 if no arguments were passed, Error if more than
 * one argument is passed, otherwise the sum of cents
 */
int main(int argc, char *argv[])
{
	unsigned int num = 0, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (_checki(argv[1]))
	{
		num = atoi(argv[1]);
		while (num > 0)
		{
			if (num % 25 == 0)
			{
				sum += 1;
				num -= 25;
			} else if (num % 10 == 0)
			{
				sum += 1;
				num -= 10;
			} else if (num % 5 == 0)
			{
				sum += 1;
				num -= 5;
			} else if (num % 2 == 0)
			{
				sum += 1;
				num -= 2;
			} else
			{
				sum += 1;
				num -= 1;
			}
		}
		printf("%d\n", sum);
	} else
		printf("0\n");
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
