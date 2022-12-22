#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters
 * @n: numbers provived
 *
 * Return: sum of parameters
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list all;

	if (n == 0)
		return (0);

	va_start(all, n);

	for (i = 0; i < n; i++)
		sum += va_arg(all, const unsigned int);

	return (sum);
}
