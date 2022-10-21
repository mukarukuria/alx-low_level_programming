#include "main.h"

/**
 * print_square - prints a square of # according to input
 * @size: input size of the square
 *
 * Return: void
 */

void print_square(int size)
{
	int i = 0, c;

	while (i < size)
	{
		for (c = 0; c < size; c++)
			_putchar('#');
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
