#include "main.h"

/**
 * _strcpy - Copies string pointed to by @src
 * @src: string that points to be copied
 * @dest: destination
 *
 * Return: pointer to @dest
 */

char *_strcpy(char *dest, chat *src)
{
	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
