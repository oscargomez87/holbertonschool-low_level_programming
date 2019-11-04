#include "lists.h"

/**
 * listint_len - Returns the number of elements in a linked listint_t list.
 *
 * @h: List of type listint_t to find elements.
 * Return: Number of elements in the list.
 */
size_t listint_len(const listint_t *h)
{
	if (h == NULL)
		return (0);
	return (1 + listint_len(h->next));
}
