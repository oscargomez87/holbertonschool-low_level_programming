#include "lists.h"

/**
 * get_dnodeint_at_index - finds the nth node of a double linked list
 *
 * @head: double linked list
 * @index: node to find
 * Return: address of nth node, NULL otherwise
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	if (head->prev != NULL)
		while (head->prev)
			head = head->prev;
	while (head)
	{
		if (n == index)
			return (head);
		head = head->next;
		n++;
	}
	return (NULL);
}
