#include "lists.h"

/**
 * list_len - counts the number of nodes in a list
 *
 * @h: list with nodes
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	if (h == NULL)
		return (0);
	if (h->next != NULL)
		return (1 + list_len(h = h->next));
	return (1);
}
