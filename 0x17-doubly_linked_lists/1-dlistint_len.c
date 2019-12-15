#include "lists.h"

/**
 * dlistint_len - count the number of nodes in a double linked list
 *
 * @h: double linked list
 * Return: number of nodes in list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	while (h->prev != NULL)
		h = h->prev;
	while (h)
	{
		h = h->next;
		n++;
	}
	return (n);
}
