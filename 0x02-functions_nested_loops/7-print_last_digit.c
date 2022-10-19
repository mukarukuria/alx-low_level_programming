# include "main.h"

/**
 * print_last_digit - prints the value last digit of a given number
 * @n : Integer to be checked
 * Return: value of the last digit
 */

int print_last_digit(int n)
{
	int digit = (n % 10);

	if (digit < 0)
		digit *= -1;

	return (digit);
}
