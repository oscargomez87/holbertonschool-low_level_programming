#include <stdio.h>

/**
 * print_array - print the first n elements in an array
 * @a: array
 * @n: number of elements to print
 */
void print_array(int *a, int n)
{
	int i = 0, j;

	while (a[i])
		i++;
	i--;
	if (i < n)
	{
		for (j = 0; j < i; j++)
		{
			if ((j + 1) != i)
				printf("%d, ", *(a + j));
			else
				printf("%d\n", *(a + j));
		}
	} else
	{
		for (j = 0; j < n; j++)
		{
			if ((j + 1) != n)
				printf("%d, ", *(a + j));
			else
				printf("%d\n", *(a + j));
		}
	}
}
