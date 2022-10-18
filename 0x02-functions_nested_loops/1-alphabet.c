#include "main.h"

/**
 * main - Entry point
 * Description: Prints alphabets in small letters with a new line at the end
 * Return: Always 0 (Success)
 */

void print_alphabet(void)
{
	char a:

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
	return (0);
}
