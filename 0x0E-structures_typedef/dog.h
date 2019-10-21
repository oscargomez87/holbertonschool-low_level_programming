#ifndef DOG_H
#define DOG_H

void init_dog(struct dog *, char *, float, char *);
void _putchar(int);
struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif
