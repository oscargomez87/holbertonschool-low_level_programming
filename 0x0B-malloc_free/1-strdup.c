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

	if (*str == '\0')
		return ('\0');
	while (str[size])
		size++;
	str = str - size;
	p = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
		p[i] = str[i];
	p[i] = '\0';
	return (p);
}
