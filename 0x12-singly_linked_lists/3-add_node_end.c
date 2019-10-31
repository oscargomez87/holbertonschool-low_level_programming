#include "lists.h"

/**
 *
 *
 *
 *
 *
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *new, *tmp;

	s = strdup(str);
	if (s == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = s;
	new->len = strlen(s);
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		tmp = *head;
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
