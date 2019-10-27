#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
void _printc(va_list arg);
void _printi(va_list arg);
void _printf(va_list arg);
void _prints(va_list arg);

/**
 * print_all - prints anything.
 * @format: format of arguments recieved
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int j = 0, i = 0;
	form_t frm[] = {
		{"c", _printc},
		{"i", _printi},
		{"f", _printf},
		{"s", _prints}
	};

	va_start(arg, format);
	while (format[j] != '\0')
	{
		i = 0;
		while (i < 4)
		{
			if (format[j] == *(frm[i]).name)
			{
				frm[i].f(arg);
				if (i + 1 != 4)
					printf(", ");
				break;
			}
			i++;
		}
		j++;
	}
	printf("\n");
	va_end(arg);
}

/**
 * _printc - Prints char argument
 *
 * @arg: argument to print
 */
void _printc(va_list arg)
{
	printf("%c", va_arg(arg, int));
}

/**
 * _printi - prints int argument
 *
 * @arg: argument to print
 */
void _printi(va_list arg)
{
	printf("%i", va_arg(arg, int));
}

/**
 * _printf - prints float argument
 *
 * @arg: argument to print
 */
void _printf(va_list arg)
{
	printf("%f", va_arg(arg, double));
}

/**
 * _prints - prints char * argument
 *
 * @arg: argument to print
 */
void _prints(va_list arg)
{
	char *s;

	s = va_arg(arg, char *);
	if (s == NULL)
		printf("%p", NULL);
	else
		printf("%s", s);
}
