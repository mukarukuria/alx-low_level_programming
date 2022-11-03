#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: Said string
 *
 * Return: length of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	else
		return (0);

	return (len);
}
