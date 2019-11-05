#include "lists.h"

/**
 * sum_listint - sums the data(n) from all nodes in a linked list
 *
 * @head: root of linked list
 * Return: The sum of the data(n) from all nodes, if linked list
 * is empty return 0
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
