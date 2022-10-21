#include "main.h"

/**
 * _isdigit- checks if int is a digit between 0 and 9
 * @c: int to be checked
 * Return: 1 if c is a digit and 0 otherwise
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
