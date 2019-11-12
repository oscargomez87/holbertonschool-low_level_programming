#include "holberton.h"

int create_file(const char *filename, char *text_content)
{
	int fd, res;
	size_t nb = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (text_content[nb] != '\0')
			nb++;
		res = write(fd, text_content, nb);
		if (res == -1)
			return (-1);
	}
	close(fd);
	return (1);
}
