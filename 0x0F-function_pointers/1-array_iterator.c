#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter on array
 * @size: size of the array
 * @array: actual array to be checked
 * @action: pointer to the function needed to be used
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
