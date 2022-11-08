#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 *		and initializes it with a special char
 * @size: specified size of array
 * @c: character to be in array
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}
