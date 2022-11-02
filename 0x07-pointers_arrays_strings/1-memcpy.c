#include "main.h"

/**
 * _memcpy - copies the memory area
 * @dest: pointer character for destination of the memory
 * @src: source pointer
 * @n: number of time function copies
 *
 * Return: Pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
