#include "main.h"

/**
 * factorial - Returns the factorial of a given number
 * @n: given number
 *
 * Return: factorial of number or -1 if number is less than 0
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (1);
	else
		return (n * factorial(n - 1));
}
