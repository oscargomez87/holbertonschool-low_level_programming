#include "3-calc.h"

/**
 * main - Program that performs simple operations between 2 numbers
 * @argc: number of arguments
 * @argv: arguments
 * Return: 0
 */
int main(int argc, char **argv)
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if ((argv[2][0] == '/' || argv[2][0] == '*' || argv[2][0] == '-'
	    || argv[2][0] == '+' || argv[2][0] == '%') && !argv[2][1])
	{
		ptr = get_op_func(argv[2]);
		printf("%d\n", ptr(atoi(argv[1]), atoi(argv[3])));
	} else
        {
                printf("Error\n");
                return (99);
        }
	return (0);
}
