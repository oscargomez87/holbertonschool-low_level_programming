#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: path to file.
 * @letters: number of letters to read from file.
 * Return: number of bytes read.
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
	if (nb == -1)
	{
		close(fd);
		free(s);
		return (0);
	}
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
