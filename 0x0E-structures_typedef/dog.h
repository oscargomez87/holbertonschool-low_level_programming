#ifndef DOG_H
#define DOG_H

void _putchar(int);

/**
 * struct dog - dog information
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);

#endif
