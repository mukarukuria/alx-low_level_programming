#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int main(void)
{
	int c;
	for (c = 1; c <= 100; c++)
	{
		if (c % 3 == 0 && c % 5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}
		else if (c % 3 == 0)
		{
			printf("Fizz ");
			continue;
		}
		else if (c % 5 == 0)
		{
			printf("Buzz ");
			continue;
		}
		printf("%d ", c);
	}
	printf("\n");
	return (0);
}
