#include <stdio.h>

/**
 * print_array - print the first n elements in an array
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if ((i + 1) != n)
			printf("%d, ", a[i]);
		else
			printf("%d\n", a[i]);
	}
}
