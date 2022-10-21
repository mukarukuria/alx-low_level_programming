#include "main.h"

/**
 * print_line -prints line accourdint to input
 * @n: input of total number of lines
 *
 * Return: void
 */

void print_line(int n)
{
	int c;

	for (c = 0; c < n; c++)
		_putchar('_');
	_putchar('\n');
}
