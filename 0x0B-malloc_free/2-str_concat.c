#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string to be concatenated
 * @s2: second string to be concatenated
 *
 * Return: Concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, str_index = 0, len = 0;

	if (s1 == NULL)
		return (NULL);

	if (s2 == NULL)
		return (NULL);

	for (i = 0; s1[i] || s2[i]; i++)
		len++;

	new = malloc(sizeof(char) * len);

	if (new == NULL)
		return (NULL);
	for (i = 0; s1[i]; i++)
		new[str_index++] = s1[i];

	for (i = 0; s2[i]; i++)
		new[str_index++] = s2[i];

	return (new);
}
