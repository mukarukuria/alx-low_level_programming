#include "main.h"

/**
 * _memset - fills the memory with a constant byte
 * @s: pointer character to the memory area
 * @b: some character
 * @n: number of bytes of the memory area
 *
 * Return: pointer to the memory area @s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;

	return (s);
}
