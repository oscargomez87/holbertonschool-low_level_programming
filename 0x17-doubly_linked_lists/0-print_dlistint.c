#include "lists.h"
/**
 * print_dlistint - Prints the elements of a double linked list
 *
 * @h: double linked list to print elements from
 * Return: the number of nodes in the list
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);

	if (h->prev != NULL)
		while (h->prev != NULL)
			h = h->prev;
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		n++;
	}
	return (n);
}
