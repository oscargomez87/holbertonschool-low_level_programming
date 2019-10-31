#include "lists.h"
int _strlen_recursion(char *s);

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
		new->len = _strlen_recursion(s);
		new->next = NULL;
		*head = new;
	}
	else
	{
		new->str = s;
		new->len = _strlen_recursion(s);
		new->next = *head;
		*head = new;
	}
	return (*head);
}

/**
 * _strlen_recursion - Returns the length of a string
 * @s: string
 * Return: Length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
