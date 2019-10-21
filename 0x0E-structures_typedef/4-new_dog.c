#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: NULL if memory allocation failes, otherwise a pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return (NULL);
	ndog->name = name;
	ndog->age = age;
	ndog->owner = owner;
	return (ndog);
}
