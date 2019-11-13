#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

void _err97(void);
void _err98(char *);
void _err99(char *);
void _err100(int);

/**
 * main - copies the contents of one file to another
 *
 * @ac: number of arguments
 * @av: arguments, must be file to copy from and file to cpy to
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	int fdf, fdt, nb;
	char *cpy;

	if (ac != 3)
		_err97();
	fdf = open(av[1], O_RDONLY);
	if (fdf == -1)
		_err98(av[1]);
	fdt = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR
		   | S_IRGRP | S_IWGRP | S_IROTH);
	if (fdt == -1)
		_err99(av[2]);
	cpy = malloc(1024 * sizeof(char));
	while ((nb = read(fdf, cpy, 1024)) > 0)
	{
		if (write(fdt, cpy, nb) != nb)
		{
			nb = -1;
			break;
		}
	}
	if (nb == -1)
		_err98(av[1]);
	free(cpy);
	if (close(fdf) == -1)
		_err100(fdf);
	if (close(fdt) == -1)
		_err100(fdt);
	return (0);
}

/**
 * _err97 - prints error message and exits with code 97
 *
 */
void _err97(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * _err98 - prints error message and exits with code 98
 *
 * @s: string to use in message
 */
void _err98(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", s);
	exit(98);
}

/**
 * _err99 - prints error message and exits with code 99
 *
 * @s: string to use in message
 */
void _err99(char *s)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", s);
	exit(99);
}

/**
 * _err100 - prints error message and exits with code 100
 *
 * @n: filedescriptor
 */
void _err100(int n)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", n);
	exit(100);
}
