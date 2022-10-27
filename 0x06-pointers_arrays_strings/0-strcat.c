#include "main.h"

/**
 * _strcat - appendd the @src string to the @dest string
 * @dest: destination variable
 * @src: source variable
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[i++])
		len++;

	for (i = 0; src[i]; i++)
		dest[len++] = src[i];

	return (dest);
}
