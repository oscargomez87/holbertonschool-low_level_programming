#include "lists.h"

/**
 * add_nodeint - Adds a node at the start of a list of type listint_t
 *
 * @head: Start of list
 * @n: value to insert in node
 * Return: address of first node on success, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (*head == NULL)
	{
		new->next = NULL;
		*head = new;
	} else
	{
		new->next = *head;
		*head = new;
	}
	return (*head);
}
