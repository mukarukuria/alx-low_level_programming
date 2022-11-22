#include <stdio.h>
#include <stdlib.h>

/**
 * main - program that adds two numbers
 * @argc: number of arguments passed
 * @argv: array of pointers to arguments
 *
 * Return: sum of positive numbers
 */

int main(int argc, char *argv[])
{
	int sum = 0, i, j;


	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
