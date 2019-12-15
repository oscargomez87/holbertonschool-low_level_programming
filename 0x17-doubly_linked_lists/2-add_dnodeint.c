#include "lists.h"

/**
 * add_dnodeint - Adds a node to the start of a double linked list
 *
 * @head: double linked list
 * @n: data to add to the new node
 * Return: the address of the new node, NULL otherwise
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temp;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	temp = *head;
	while (temp->prev != NULL)
		temp = temp->prev;
	new->next = temp;
	temp->prev = new;
	*head = new;
	return (*head);
}
