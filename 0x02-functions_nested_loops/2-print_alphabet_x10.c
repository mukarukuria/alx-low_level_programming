#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Description: Prints alphabets in small letters 10 times with a new line each time
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	int x = 0;

	while (x < 10)
	{
		for (char ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
		_putchar('\n');
		x++;
	}
}
