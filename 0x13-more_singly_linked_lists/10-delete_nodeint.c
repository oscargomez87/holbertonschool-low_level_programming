#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node from a linked list
 *
 * @head: start of list to delete node from
 * @index: position of the node in the list (begining is 0)
 * Return: 1 if successful, otherwise -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *node;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (temp == NULL)
			return (-1);
		i++;
		temp = temp->next;
	}
	node = temp->next;
	temp->next = node->next;
	free(node);
	return (1);
}
