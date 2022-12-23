#include <string.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything provided
 * @format: list of types of arguments passed to the function
 *
 * Return: void
 */

void print_all(const char * const format, ...)
{
	const char *p = format;
	va_list ls;

	va_start(ls, format);
	
	while(*p != '\0')
	{
		if(*p == 'c')
			printf("%c, ", va_arg(ls, int));
		if(*p == 'i')
			printf("%d, ", va_arg(ls, int));
		if(*p == 'f')
			printf("%f, ", va_arg(ls, double));
		if(*p == 's')
		{
			char* str = va_arg(ls, char*);
			
			if(str == NULL)
				printf("(nil)");

			printf("%s, ", str);
		}
		p++;
	}
	va_end(ls);
	printf("\n");
}
