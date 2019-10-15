#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - Concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, size1 = 0, size2 = 0;

	if (*s1 == '\0' && *s2 == '\0')
		return ('\0');
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	p = malloc((size1 + size2) * sizeof(char));
	if (!p)
		return (NULL);
	for (i = 0; i < (size1 + size2); i++)
	{
		if (i < size1)
			p[i] = s1[i];
		else
			p[i] = s2[i - size1];
	}
	p[i] = '\0';
	return (p);
}
