#include "main.h"

/**
 * _strncat - similar to strcar but uses most n bytes
 * @dest: Destination prob
 * @src: source prob
 * @n: int to determine the size
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0, i;

	while (dest[i++])
		len++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len++] = src[i];

	return (dest);
}


