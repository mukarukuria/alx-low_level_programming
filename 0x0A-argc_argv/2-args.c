#include <stdio.h>

/**
 * main - prints all argument it receives
 * @argc: The number of arguments provided to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
