#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position in a
 * double linked list
 *
 * @h: double linked list
 * @idx: position to insert node
 * @n: data for the new node
 * Return: address of the new node, NULL otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int pos = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*h == NULL && idx == 0)
		return (add_dnodeint(h, n));
	temp = *h;
	if (temp != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp)
	{
		if (pos == idx)
		{
			if (idx == 0)
			{
				new->next = temp;
				(*h)->prev = new;
				return (new);
			}
			new->prev = temp->prev;
			new->next = temp;
			temp->prev->next = new;
			temp->prev = new;
			return (new);
		}
		pos++;
		temp = temp->next;
	}
	if (pos == idx)
		return (add_dnodeint_end(h, n));
	free(new);
	return (NULL);
}
