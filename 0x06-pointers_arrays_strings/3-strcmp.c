#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: string compared to @s2
 * @s2: string compared to @s1
 *
 * Return: some int
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
