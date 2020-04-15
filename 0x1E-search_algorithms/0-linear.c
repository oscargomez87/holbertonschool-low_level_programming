#include "search_algos.h"

/**
 * linear_search - searches for a value in an array using linear search
 *
 * @array: pointer to first element of array to search in
 * @size: size of array
 * @value: value to search in array
 *
 * Return: index of value
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
