#include "3-calc.h"

/**
 * op_add - adds 2 numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - difference between 2 numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies 2 numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_div(int a, int b)
{
	if (b != 0)
		return (a / b);
	else
	{
		printf("Error\n");
		exit(100);
	}
}

/**
 * op_mod - module between 2 numbers
 * @a: first number
 * @b: second number
 * Return: result
 */
int op_mod(int a, int b)
{
	if (b != 0)
                return (a % b);
        else
        {
                printf("Error\n");
                exit(100);
        }
}
