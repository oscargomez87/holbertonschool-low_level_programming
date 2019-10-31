#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - adds a node to a list
 *
 * @head: list where to add node
 * @str: element to pack in a node and add to list
 * Return: address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	int len = strlen(str);
	list_t *new;
	list_t *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
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
