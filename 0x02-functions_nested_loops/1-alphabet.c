#include "main.h"

/**
 * print_alphabet - Entry point
 * Description: Prints alphabets in small letters with a new line at the end
 */

void print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
		_putchar(a);
	_putchar('\n');
}
