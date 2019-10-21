#ifndef DOG_H
#define DOG_H

void _putchar(int);
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *, char *, float, char *);

#endif
