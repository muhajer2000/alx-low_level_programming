#include "variadic_functions.h"
#include <stdlib.h>

/**
 * print_numbers - a function that prints numbers
 * @separator: s the string to be printed between numbers
 * @n: number of arguments
 * @...: argement to print it
 * Return: 0 if n == 0
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	int j;

	if (!n)
	{
		printf("\n");
		return (0);
	}
	va_list ptr;

	va_start(ptr, n);
	for(j = 0; j < n; j++)
	{
		if (!separator)
			printf("%d", va_arg(ptr, int));
		else if (separator && j == 0)
			printf("%d", va_arg(ptr, int));
		else
			printf("%s%d", separator, va_arg(ptr, int));
	}
	va_end(ptr);
	printf("\n");
}
