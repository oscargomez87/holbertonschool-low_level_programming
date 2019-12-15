#include "lists.h"

/**
 *
 *
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	if (temp->prev != NULL)
		while (temp->prev != NULL)
			temp = temp->prev;
	while (temp->next != NULL)
	{
		temp = temp->next;
		free(temp->prev);
	}
	free(temp);
}
