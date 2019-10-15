#include <stdlib.h>
#include <stdio.h>

/**
 * _strdup - copies a string and returns a pointer to that string
 * @str: string to copy
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	int i, size = 0;
	char *p;

	if (str == NU<<LL)
		return (NULL);
	while (str[size])
		size++;
	p = malloc(size * sizeof(char));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		p[i] = str[i];
	return (p);
}
