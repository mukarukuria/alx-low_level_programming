include "main.h"

/**
 * reverse_array - Reverses contents of an array
 * @a: an array of integers
 * @n: number of elements of the array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int tmp, start = 0, end = n - 1;

	while (start < end)
	{
		tmp = a[start];
		a[start] = a[end];
		a[end] = tmp;
		start++;
		end--;
	}

}
