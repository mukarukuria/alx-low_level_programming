#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: pointer to head of list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
