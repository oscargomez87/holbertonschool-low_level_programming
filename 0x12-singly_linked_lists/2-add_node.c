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
	char *s;
	list_t *new;

	if (str == NULL)
		return (NULL);
	s = strdup(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->str = s;
		new->len = strlen(s);
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->str = s;
		new->len = strlen(s);
		new->next = *head;
		*head = new;
	}
	return (*head);
}
