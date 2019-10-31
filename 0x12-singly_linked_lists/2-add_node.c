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
	int len;
	list_t *new;

	if (str == NULL)
		return (NULL);
	len = strlen(str);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->str = strdup(str);
		new->len = len;
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->str = strdup(str);
		new->len = len;
		new->next = *head;
		*head = new;
	}
	return (*head);
}
