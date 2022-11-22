#include <stdio.h>
#include <stdlib.h>

/**
 * main - mutplies two integer numbers
 * @argc: number of arguments passed
 * @argv: Array of pointers to arguments
 *
 * Return: the mutiplication value of the two numbers
 */

int main(int argc, char *argv[])
{
	int num1, num2, ans;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	ans = num1 * num2;

	printf("%d\n", ans);
	return (0);
}
