#include <stdlib.h>
/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate
 * @size: size of array to iterate
 * @action: function to execute on elements of array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL)
	{
		int i;

		for (i = 0; i < (int)size; i++)
			(*action)(*(array + i));
	}
}
