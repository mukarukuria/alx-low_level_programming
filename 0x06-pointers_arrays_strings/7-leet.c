#include "main.h"

/**
 * leet - Encodesa string to 1337
 * @str: String to be encoded
 *
 * Return: Encoded string
 */

char *leet(char *str)
{
	int n = 0, index;
	char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};

	while (str[n])
	{
		for (index = 0; index <= 7; index++)
		{
			if (str[n] == leet[index] ||
					str[n] - 32 == leet[index])
				str[n] = index + '0';
		}
		n++;
	}
	return (str);
}
