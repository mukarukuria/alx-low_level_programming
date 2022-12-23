#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of integers to be printed
 *
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ls;

	if (separator == NULL)
		separator = "";

	va_start(ls, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ls, const unsigned int));
		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ls);
	printf("\n");
}
