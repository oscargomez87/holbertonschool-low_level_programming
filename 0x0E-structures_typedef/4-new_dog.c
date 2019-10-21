#include <stdlib.h>
#include "dog.h"
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *ndog;

	ndog = malloc(sizeof(struct dog));
	if (ndog == NULL)
		return NULL;
	ndog->name = name;
	ndog-> age = age;
	ndog->owner = owner;
	return (ndog);
}
