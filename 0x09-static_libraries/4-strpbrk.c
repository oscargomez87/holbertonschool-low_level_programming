#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search
 * @accept: set of bytes to compare
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p = '\0';

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				break;
			}
		}
		if (p != '\0')
			break;
	}
	return (p);
}
