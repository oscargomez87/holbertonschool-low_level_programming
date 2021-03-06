#include <stdio.h>

/**
 * main - prints the numbers from 1 to 100, followed by a new line,
 * for multiples of three print Fizz instead of the number and
 * for the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz
 * Return: 0  when successful
 */
int main(void)
{
	int i, n1, n2;

	for (i = 1; i <= 100; i++)
	{
		n1 = i / 3;
		n2 = i / 5;
		if (((n1 * 3) == i) && !((n2 * 5) == i))
			printf("Fizz");
		else if ((n2 * 5) == i && !((n1 * 3) == i))
			printf("Buzz");
		else if (((n1 * 3) == i) && ((n2 * 5) == i))
			printf("FizzBuzz");
		else
			printf("%d", i);
		if (i < 100)
			printf(" ");
	}
	printf("\n");
	return (0);
}
