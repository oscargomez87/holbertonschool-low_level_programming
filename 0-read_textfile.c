#include "holberton.h"

/**
 *
 *
 *
 *
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, nb, i = 0;
	char *s;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	s = malloc(letters * sizeof(char));
	if (s == NULL)
		return (0);
	nb = read(fd, s, letters);
	close(fd);
	s[nb] = '\0';
	while (s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
	free(s);
	return (nb);
}
