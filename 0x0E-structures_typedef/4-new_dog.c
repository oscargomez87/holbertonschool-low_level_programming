#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
int _stringlength(char *);
char *_fill(int, char *, char *);
/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if memory allocation failes, otherwise a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *ndog;
	char *n, *o;
	int i, j;

	i =  _stringlength(name);
	j =  _stringlength(owner);
	n = malloc((i + 1) * sizeof(char));
	if (n == NULL)
	{
		free(n);
		return (NULL);
	}
	o = malloc((j + 1) * sizeof(char));
	if (o == NULL)
	{
		free(o);
		return (NULL);
	}
	_fill(i, n, name);
	_fill(j, o, name);
	ndog = malloc(sizeof(dog_t));
	if (ndog == NULL)
	{
		free(ndog);
		free(n);
		free(o);
		return (NULL);
	}
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}

/**
 * _stringlength - finds the length of a string
 * @p: string
 * Return: length of string
 */
int _stringlength(char *p)
{
	if (!*p)
		return (0);
	else
		return (1 + _stringlength(p + 1));
}

/**
 * _fill - copies one string to another
 * @n: elements on string
 * @dest: copy destination
 * @src: copy source
 * Return: pointer to copied string
 */
char *_fill(int n, char *dest, char *src)
{
	int k;

	for (k = 0; k < n; k++)
		dest[k] = src[k];
	dest[k] = '\0';
	return (dest);
}
