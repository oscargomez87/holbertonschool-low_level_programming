#include "holberton.h"

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output.
 *
 * @filename: path to file.
 * @letters: number of letters to read from file.
 * Return: number of bytes read or 0 on error
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
	if (nb == -1)
	{
		free(s);
		return (0);
	}
	i = write(STDOUT_FILENO, s, nb);
	free(s);
	if (i == -1)
		return (0);
	return (i);
}
