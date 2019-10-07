#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 * of a square matrix of integers.
 * @a: matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;
	int *p = a;

	for (i = 0; i < size * size; i += (size + 1))
	{
		sum1 = sum1 + p[i];
	}
	for (i = (size * size) - size; i >= 0; i -= size - 1)
	{
		sum2 = sum2 + p[i];
	}
	printf("%d, %d\n", sum1, sum2);
}
