#include "lists.h"

/**
 * pop_listint - deletes head of a node of a list
 *
 * @head: list to delete start node from
 * Return: Address of next node
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;
	if (*head == NULL)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
