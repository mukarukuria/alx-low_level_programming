#include "main.h"

/**
 * _strlen - Returns the length of a string
 * @s: Charter to determine length
 *
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s++)
		i++;

	return (i);
}
