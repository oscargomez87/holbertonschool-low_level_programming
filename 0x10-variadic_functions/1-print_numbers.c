#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list number;
	int i;

	if (separator == NULL)
		separator = "";
	va_start(number, n);
	for (i = 0; i < (int)n; i++)
	{
		if (i != ((int)n - 1))
			printf("%d%s", va_arg(number, int), separator);
		else
			printf("%d", va_arg(number, int));
	}
	printf("\n");
}
