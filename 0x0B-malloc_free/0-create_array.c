#include <stdlib.h>

/**
 * create_array - creates an array of a given size with a given char
 * @size: size of the array
 * @c: content of the array
 * Return: Returns the array
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return ('\0');
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = c;
	p[i] = '\0';
	return (p);
}
