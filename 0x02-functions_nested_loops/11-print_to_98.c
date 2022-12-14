#include <stdio.h>

/**
 * print_to_98 - Prints numbers to 98
 * @n : Starting integer to get to 98
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d\n", n);
	} else
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d\n", n);
	}
}
