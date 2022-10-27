#include "main.h"

/**
 * _strncpy - Copies a string
 * @dest: destination variable
 * @src: source variable
 * @n: int to be done smth with
 *
 * Return: copied string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len = 0, i = 0;

	while (src[i++])
		len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	while (len < n)
	{
		dest[len] = '\0';
		len++;
	}
	return (dest);
}
