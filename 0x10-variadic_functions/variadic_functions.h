#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

#include <stdarg.h>

/**
 * struct form - stores the type of arguments
 * @name: type of data
 * @f: pointer to function
 */
typedef struct form
{
	char *name;
	void (*f)(va_list);
} form_t;

int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const, ...);

#endif
