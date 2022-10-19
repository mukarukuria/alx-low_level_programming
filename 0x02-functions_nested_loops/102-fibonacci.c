#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int n = 0, sum;
	unsigned long fib1 = 0, fib2 = 1;

	while (n < 50)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		fib1 = fib2;
		fib2 = sum;
		n++;
		if (n == 50)
			break;
		printf(", ");
	}
	return (0);
}
