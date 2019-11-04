#include "lists.h"

/**
 * free_listint - Frees the memory used by the linked list
 *
 * @head: start of linked list
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
