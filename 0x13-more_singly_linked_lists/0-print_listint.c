#include "lists.h"

/**
 * print_listint - Prints all the elements of a listint_t list and
 * returns the number of nodes
 *
 * @h: list of type listint_t to print
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	if (h == NULL)
		return (0);
	printf("%d\n", h->n);
	return (1 + print_listint(h->next));
}
