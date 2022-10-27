#include "main.h"

/**
 * swap_int - Swaps int a and int b
 * @a: int to be swapped with b
 * @b: int to be swaped with a
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
