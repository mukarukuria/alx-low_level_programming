#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String itself
 * @accept: start of string substring
 *
 * Return: number of bytes in the initial segment
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int total = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				total++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (total);
		}
		s++;
	}
	return (total);
}
