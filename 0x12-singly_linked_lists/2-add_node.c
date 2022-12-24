#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: head of the list
 * @str: string to be added to list
 *
 * Return: address of the new element or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	int len;

	if (new == NULL)
		return (NULL);

	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = *head;
	*head = new;

	return (new);
}
