#include "lists.h"

/**
 *
 *
 *
 *
 *
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 1;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	temp = *head;
	while (temp != NULL)
	{
		if (i == (int)idx)
			break;
		temp = temp->next;
		i++;
	}
	if (i > (int)idx)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (*head);
}
