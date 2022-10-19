#include "main.h"

/**
 * _abs - Computes absolute value of an integer
 * @n : Integer to be checked
 * Return: absolute value of n
 */

int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
}
