#include "dog.h"

/**
 * init_dog - initialize variable of type struct dog
 * @d: pointer to structure
 * @name: dog's name
 * @age: dog's age
 * @owner: name of dog's owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	struct dog *p;

	p = d;
	p->name = name;
	p->age = age;
	p->owner = owner;
}
