#include "variadic_functions.h"

/**
 * sum_them_all - Adds all parameters received
 * @n: Number of arguments
 * Return: The sum of all parameters or 0 if the number of parameters is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int i, sum = 0;

	if (n == 0)
		return (0);
	va_start(valist, n);
	for (i = 0; i < (int)n; i++)
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}
