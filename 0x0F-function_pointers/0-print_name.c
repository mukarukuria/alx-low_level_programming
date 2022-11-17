#include "function_pointers.h"

/**
 * print_name - Prints the name given in parameters
 * @name: Provided name
 * @f: function pointer
 *
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

