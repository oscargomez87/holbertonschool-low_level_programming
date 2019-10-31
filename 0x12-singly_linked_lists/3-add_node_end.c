#include "lists.h"
int _strlen_recursion(char *);

/**
 * add_node_end - adds a node to the end of a list
 *
 * @head: root of list
 * @str: string to store in node
 * Return: the address of the root of the list
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
	new->len = _strlen_recursion(s);
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
