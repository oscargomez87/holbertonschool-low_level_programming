#include "lists.h"

/**
 * free_dlistint - frees memoery used by a double linked list
 *
 * @head: double linked list
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
