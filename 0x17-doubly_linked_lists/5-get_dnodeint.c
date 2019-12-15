#include "lists.h"

/**
 *
 *
 *
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	if (head->prev != NULL)
		while (head->prev)
			head = head->prev;
	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
