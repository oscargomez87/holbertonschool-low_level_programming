#include "3-calc.h"
#include <stdlib.h>

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (i < 6)
	{
		if (*(ops + i)->op == *s)
			break;
		i++;
	}
	return (*(ops + i)->f);
}
