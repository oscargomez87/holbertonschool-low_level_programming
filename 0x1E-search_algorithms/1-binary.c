#include "search_algos.h"

/**
 * binary_search - Uses binary search to find value in array
 *
 * @array: pointer to first element of array to search in
 * @size: size of array
 * @value: element to search in array
 *
 * Return: index where the value is if found, otherwise -1
 **/
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, j = size - 1, mpoint, x;

	if (array != NULL)
	{
		while (i <= j)
		{
			printf("Searching in array: ");
			for (x = i; x <= j; x++)
			{
				if (x < j)
					printf("%d,", array[x]);
				else
					printf("%d\n", array[x]);
			}
			mpoint = (i + j) / 2;
			if (array[mpoint] < value)
				i = mpoint + 1;
			else if (array[mpoint] > value)
				j = mpoint - 1;
			else
				return (mpoint);
		}
	}
	return (-1);
}
