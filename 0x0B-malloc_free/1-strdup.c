#include <stdlib.h>

/**
 * _strdup - copies a string and returns a pointer to that string
 * @str: string to copy
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	unsigned int i, size = 0;
	char *p;

	while (str[size])
		size++;
	p = malloc(size * sizeof(char));
	if (!p)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
