#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdio.h>
#include <unistd.h>

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
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fdf = open(av[1], O_RDONLY);
	if (fdf == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n",
			av[1]);
		exit(98);
	}
	fdt = open(av[2], O_TRUNC | O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR
		   | S_IRGRP | S_IWGRP | S_IROTH);
	cpy = malloc(1024);
	while ((nb = read(fdf, cpy, sizeof(cpy))) > 0)
	{
		if (write(fdt, cpy, nb) != nb)
		{
			nb = -1;
			break;
		}
	}
	if (nb == -1 || fdt == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	free(cpy);
	if (close(fdf) == -1 || close(fdt) == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't close fd %d\n",
			(close(fdf) == -1 ? fdf : fdt));
		exit(100);
	}
	return (0);
}
