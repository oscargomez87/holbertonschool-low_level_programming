#include "stdlib.h"
#include "stdio.h"
#include "3-calc.h"

int main(__attribute__((unused)) int argc, char **argv)
{
	int (*ptr)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '%' || argv[2][0] == '/'))
	{
		printf("Error\n");
		return (100);
	}
	if (argv[2][0] == '/' || argv[2][0] == '*' || argv[2][0] == '-' \
	    || argv[2][0] == '+' || argv[2][0] == '%')
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
