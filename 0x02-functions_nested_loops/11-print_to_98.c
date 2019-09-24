#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98,
 * followed by a new line
 * @n: any integer value
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
void print_to_98(int n)
{
	int a = n;

	if (a < 98)
	{
		do {
			if (a != 98)
				printf("%d, ", a);
			else
				printf("%d\n", a);
			a++;
		} while (a < 99);
	} else if (a > 98)
	{
		do {
			if (a != 98)
				printf("%d, ", a);
			else
				printf("%d\n", a);
			a--;
		} while (a > 97);
	} else if (a == 98)
		printf("%d\n", a);
}
