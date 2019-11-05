#include "lists.h"

/**
 * get_nodeint_at_index - finds the node where the index is
 *
 * @head: list to look index into
 * @index: element to find in list
 * Return: Address to node, otherwise NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	int i = 0;

	while (head != NULL)
	{
		if (i == (int)index)
			return (head);
		i++;
		head = head->next;
	}
	return (head);
}
