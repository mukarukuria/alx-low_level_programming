#include "main.h"

/**
 * main - Entry point
 * Description: Prints alphabets in small letters 10 times with a new line each time
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x;
	char c;

	while (x < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
		x++;
	}
}
