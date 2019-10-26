#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: strings separator
 * @n: number of strings to print
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arg;
	int i;
	char *s;

	if (separator == NULL)
		separator = "";
	va_start(arg, n);
	for (i = 0; i < (int)n; i++)
	{
		s = va_arg(arg, char*);
		if (i != ((int)n - 1))
			if (s == NULL)
				printf("%p%s", NULL, separator);
			else
				printf("%s%s", s, separator);
		else
			if (s == NULL)
				printf("%p", NULL);
			else
				printf("%s", s);
	}
	va_end(arg);
	printf("\n");
}
