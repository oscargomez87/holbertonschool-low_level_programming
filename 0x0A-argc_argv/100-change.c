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
	int num, sum = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	num = atoi(argv[1]);
	if (num > 0)
	{
		while (num > 0)
		{
			if (num % 25 == 0)
				num -= 25;
			else if (num % 10 == 0)
				num -= 10;
			else if (num % 5 == 0)
				num -= 5;
			else if (num % 2 == 0)
				num -= 2;
			else
				num -= 1;
			sum++;
		}
		printf("%d\n", sum);
	}
	return (0);
}
