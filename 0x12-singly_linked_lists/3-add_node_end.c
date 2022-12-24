#include "lists.h"

/**
 * add_node_end - adds a new node node at the end of a list
 * @head: pointer to head of list
 * @str: string to be added to the end of the list
 *
 * Return: address of the new element or NULL if failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	int len;
	list_t *new = malloc(sizeof(list_t)), *current;

	if (new == NULL)
		return (NULL);
	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;

	} else
	{
		current = *head;

		while (current->next != NULL)
			current = current->next;

		current->next = new;
	}
	return (*head);
}
