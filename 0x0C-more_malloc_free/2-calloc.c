#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements in array
 * @size: size of elements in array
 * Return: pointer to array created, NULL on malloc fail
 * or nmemb or size equals 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc((nmemb * size) + 1);
	if (!p)
		return (NULL);
	for (i = 0; i < (nmemb * size) + 1; i++)
		p[i] = 0;
	return (p);
}
