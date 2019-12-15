#include "lists.h"

/**
 * sum_dlistint - sums all the data in a double linked list
 *
 * @head: double linked list
 * Return: the sum of all data in the double linked list
 */
int sum_dlistint(dlistint_t *head)
{
	int result = 0;

	if (head == NULL)
		return (result);
	if (head->prev != NULL)
		while (head->prev != NULL)
			head = head->prev;
	while (head)
	{
		result += head->n;
		head = head->next;
	}
	return (result);
}
