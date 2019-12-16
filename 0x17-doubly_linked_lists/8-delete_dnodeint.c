#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node in a position
 * from a double linked list
 *
 * @head: double linked list
 * @index: position
 * Return: 1 if successful, -1 otherwise
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	while (temp->prev != NULL)
		temp = temp->prev;
	while (temp)
	{
		if (pos == index)
		{
			if (temp->next == NULL && temp->prev == NULL)
			{
				free(temp);
				*head = NULL;
				return (1);
			}
			else if (temp->next == NULL)
			{
				temp->prev->next = NULL;
				free(temp);
				return (1);
			} else if (temp->prev == NULL)
			{
				temp->next->prev = NULL;
				*head = temp->next;
				free(temp);
				return (1);
			}
			temp->prev->next = temp->next;
			temp->next->prev = temp->prev;
			free(temp);
			return (1);
		}
		pos++;
		temp = temp->next;
	}
	return (-1);
}
