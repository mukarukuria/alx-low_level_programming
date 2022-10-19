#include "main.h"

/**
 * _islower - Entry point
 * Description: Determines whether a char is lowercase.
 * Return: Always 0 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
