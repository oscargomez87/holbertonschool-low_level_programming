#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_all - prints anything.
 * @format: format of arguments recieved
 */
void print_all(const char * const format, ...)
{
	va_list arg;
	int j = 0;
	/*char *s;*/

	va_start(arg, format);
	while (format[j] != '\0')
	{
		/*switch (format[j])
		{
		case 'c':
			printf("%c", va_arg(arg, int));
			break;
		case 'i':
			printf("%d", va_arg(arg, int));
			break;
		case 'f':
			printf("%f", va_arg(arg, double));
			break;
		case 's':
			s = va_arg(arg, char*);
			if (s != NULL)
				printf("%s", s);
			else
				printf("%p", NULL);
			break;
		}
		if ((format[j] == 'c' || format[j] == 'i' || format[j] == 'f'
		     || format[j] == 's') && format[j + 1] != '\0')
		     printf(", ");*/
		j++;
	}
	printf("\n");
	va_end(arg);
}
