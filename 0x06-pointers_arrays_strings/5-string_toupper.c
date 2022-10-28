#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of strings to uppercase
 * @str: Lowercase string
 *
 * Return: Upercase string
 */

char *string_toupper(char *str)
{
	int n = 0;

	while (str[n])
	{
		if (str[n] >= 'a' && str[n] <= 'z')
			str[n] -= 32;

		n++;
	}
	return (str);
}
