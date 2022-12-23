#include <string.h>
#include "variadic_functions.h"

/**
 * print_strings- prints stringd followed by a new line
 * @separator: string to be printedbetween the strings
 * @n: number of strings passed to the function
 *
 * Return: void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ls;

	va_start(ls, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		str = va_arg(ls, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1)
			printf("%s", separator);
	}
	va_end(ls);
	printf("\n");
}
