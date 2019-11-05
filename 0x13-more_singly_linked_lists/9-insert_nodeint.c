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
	unsigned int i = 0;
	listint_t *temp, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	temp = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (*head);
	}
	while (i < (idx - 1))
	{
		if (temp == NULL)
		{
			free(new);
			return (NULL);
		}
		i++;
		temp = temp->next;
	}
	new->next = temp->next;
	temp->next = new;
	return (temp->next);
}
