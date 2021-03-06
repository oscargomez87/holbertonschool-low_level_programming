#include "lists.h"

/**
 * free_listint2 - Frees memory used by linked list and sets
 * head to NULL.
 *
 * @head: Start of list.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
}
