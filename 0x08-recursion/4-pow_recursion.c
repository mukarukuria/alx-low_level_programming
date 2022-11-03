#include "main.h"

/**
 * _pow_recursion - returns the value of @x raised to the power @y
 * @x: value of number
 * @y: power of number
 *
 * Return: power of x or -1 if @y is less than 0
 */

int _pow_recursion(int x, int y)
{
	int ans = x;

	if (y < 0)
		return (-1);

	else if (y ==0)
		return (1);

	else
		ans *= _pow_recursion(x, y - 1);

	return (ans);
}
