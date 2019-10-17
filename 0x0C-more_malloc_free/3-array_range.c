#include <stdlib.h>

/**
 * array_range - creates an array of integers between
 * min(included) and max(included)
 * @min: first element of array
 * @max: last element of array
 * Return: NULL if min is greater than max or if malloc fails,
 * otherwise the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *p, i;

	if (min > max)
		return (NULL);
	p = malloc(((max - min) + 1) * sizeof(int));
	if (!p)
		return (NULL);
	for (i = 0; i <= max - min; i++)
		p[i] = min + i;
	return (p);
}
