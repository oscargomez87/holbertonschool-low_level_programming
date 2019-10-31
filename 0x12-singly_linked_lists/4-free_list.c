#include "lists.h"

/**
 * free_list - frees memory used by nodes
 *
 * @head: list of nodes
 */
void free_list(list_t *head)
{
	list_t *tmp;
	void *before;

	if (head == NULL)
		return;
	tmp = head;
	while (tmp->next != NULL)
	{
		before = tmp->next;
		free(tmp);
		tmp = before;
	}
	free(tmp);
}
