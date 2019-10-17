#include <stdlib.h>
int _strlen(char *s);

/**
 * string_nconcat - concatenates two strings
 * @s1: first string always copied
 * @s2: second string, n chars copied from
 * @n: number of chars to copy from s2
 * Return: pointer to memory location of copied string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	int sizes1, sizes2, k, num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	sizes1 = _strlen(s1);
	sizes2 = _strlen(s2);
	if (num >= sizes2)
	{
		p = malloc(sizeof(char) * (sizes1 + sizes2 + 1));
		if (p == NULL)
			return (NULL);
		for (k = 0; k < (sizes1 + sizes2); k++)
		{
			if (k < sizes1)
				*(p + k) = *(s1 + k);
			else
				*(p + k) = *(s2 + (k - sizes1));
		}
	}
	else
	{
		p = malloc(sizeof(char) * (sizes1 + num + 1));
		if (p == NULL)
			return (NULL);
		for (k = 0; k < (sizes1 + num); k++)
		{
			if (k < sizes1)
				*(p + k) = *(s1 + k);
			else
				*(p + k) = *(s2 + (k - sizes1));
		}
	}
	*(p + k) = '\0';
	return (p);
}

/**
 * _strlen - gets the length of a string
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	if (!*s)
		return (0);
	else
		return (1 + _strlen(s + 1));
}
