#include "holberton.h"

/**
 * swap_int - swaps variables values using pointers
 * @a: pointer to first variable
 * @b: pointer to second variable
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *b;
	*b = *a;
	*a = tmp;
}
