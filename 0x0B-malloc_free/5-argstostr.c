#include <stdlib.h>
#include <stdio.h>

int _strlen(char *);
char *argstostr(int ac, char **av)
{
	int i, j, k, gsize = 0;
	char *s;

	if (ac == 0 || !av)
		return (NULL);
	for (i = 0; i < ac; i++)
		gsize += _strlen(av[i]);
	s = malloc(gsize * sizeof(char));
	if (!s)
	{
		free(s);
		return (NULL);
	}
	i = 0;
	j = 0;
	while (i < gsize)
	{
		while (j < ac)
		{
			k = 0;
			while (k < _strlen(av[j]))
			{
				s[i] = av[j][k];
				k++;
				i++;
			}
			s[i] = '\n';
			i++;
			j++;
		}
	}
	return(s);
}

int _strlen(char *s)
{	
	if (!*s)
		return (0);
	else
		return (1 + _strlen(s + 1));
	return (1);
}
