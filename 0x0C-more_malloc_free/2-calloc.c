#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: array to be allocated memory
 * @size: size of the array
 *
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *memory;
	char *fill;
	unsigned int i;

	if (size == 0 || nmemb == 0)
		return (NULL);

	memory = malloc(size * nmemb);

	if (memory == NULL)
		return (NULL);

	fill = memory;

	for (i = 0; i < (size * nmemb); i++)
		fill[i] = '\0';

	return (memory);
}
