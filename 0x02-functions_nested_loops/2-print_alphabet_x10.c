#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet in lowercase ten times
 */

void print_alphabet_x10(void)
{
	int x = 0;
	char c;

	while (x < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		x++;
	}
}
