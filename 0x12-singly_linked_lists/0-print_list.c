#include "lists.h"

/**
 * print_list - prints all the elements in a type list_t list
 *
 * @h: list to print
 * Return: Number of nodes printed
 */
size_t print_list(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->str != NULL)
		printf("[%d] %s\n", h->len, h->str);
	else
		printf("[0] %p\n", h->str);
	if (h->next != NULL)
		return (1 + print_list(h = h->next));
	return (1);
}
