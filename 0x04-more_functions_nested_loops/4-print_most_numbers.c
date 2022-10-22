#include "main.h"

/**
 * print_most_numbers - prints numbers 0 to 9 excluding 2 and 4
 *
 * Return: void
 */

void print_most_numbers(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		_putchar('0' + c);
	}
	_putchar('\n');
}
