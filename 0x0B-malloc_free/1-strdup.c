#include "main.h"
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 *	which contains a copy of the string given as a parameter
 * @str: provided string
 *
 * Return: pointer to newly allocated space
 */

char *_strdup(char *str)
{
	char *dul;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	dul = malloc(sizeof(char) * (len + 1));

	if (dul == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dul[i] = str[i];

	dul[len] = '\0';

	return (dul);
}
