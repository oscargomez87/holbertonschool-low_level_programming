#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a node in a linked list at the
 * position given
 *
 * @head: list to insert node into
 * @idx: position where node must be inserted
 * @n: Data for the new node
 * Return: Returns the address of the new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int i = 1;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL || *head == NULL)
		return (NULL);
	temp = *head;
	if (idx == 0)
	{
		new->n = n;
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (temp != NULL)
	{
		if (i == (int)idx)
			break;
		i++;
		temp = temp->next;
	}
	if (i > (int)idx)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = temp->next;
	temp->next = new;
	return (temp->next);
}
