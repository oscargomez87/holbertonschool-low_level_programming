#include <stdlib.h>

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc((nmemb * size) + 1);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < (nmemb * size) + 1; i++)
		p[i] = 0;
	return (p);
}
