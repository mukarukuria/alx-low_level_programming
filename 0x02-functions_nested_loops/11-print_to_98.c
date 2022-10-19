#include <stdio.h>

/**
 * print_to_98 - Prints numbers to 98
 */

void print_to_98(int n)
{
	if (n <=98)
	{
		for ( ; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
				break;
			printf(", ");
		}
	} else 
	{
		for ( ; n >= 98; n--)
		{
			printf("%d", n);
			if (n = 98)
				break;
			printf(", ");
		}
	}
}
