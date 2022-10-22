#include "main.h"

/**
 * print_triangle - Prints a triangle with #
 * @size: size and number of triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
	int i, tri;

	if (size > 0)
	{
		for (tri = 1; tri <= size; tri++)
		{
			for (i = size - tri; i > 0; i--)
			{
				_putchar(' ');
			}
			for (i = 0; i < tri; i++)
			{
				_putchar('#');
			}
			if (hash == size)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
