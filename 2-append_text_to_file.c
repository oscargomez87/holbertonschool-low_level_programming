#include "holberton.h"

/**
 * append_text_to_file - appends text at the end of a file.
 *
 * @filename: name of file to append text into
 * @text_content: text to append
 * Return: 1 on success, -1 otherwise
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res, nb = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
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
	return (1);
}
