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

	if (n == 0)
	{
		printf("\n");
		return;
	}
	va_list ptr;

	va_start(ptr, n);
	for (j = 0; j < n; j++)
	{
		printf("%d%s", va_arg(ptr, int));
			(j ? (separator ? separator : "") : "\n");
	}
	va_end(ptr);
}
