#include <stdlib.h>
/**
 * int_index - Searches for an integer
 * @array: pointer to array to search integers in
 * @size: number of elements in @array
 * @cmp: Pointer to function to run on array element
 * Return: index of the first element for wich @cmp does not return 0,
 * otherwise returns -1 if no element matchs or @size if less or equal to 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array != NULL && cmp != NULL)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(*(array + i)) != 0)
				return (i);
		}
		return (-1);
	}
	return (-1);
}
