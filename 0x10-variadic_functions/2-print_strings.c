#include "variadic_functions.h"

/**
 * print_strings -  a function that prints strings
 * @separator: string to be printed between the strings
 * @n: number of argument
 * Return: 0 (success)
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *s;
	int j;

	va _list ptr;
	va_start(ptr, n);
	for (j = 0; j < n; j++)
	{
		s = va_arg(ptr, char*);
		if (!s)
			s = "(nil)";
		if (!separator)
			printf("%s", s);
		if (j == 0 && separator)
			printf("%s", s);
		else
			printf("%s%s", separator, s);
	}
	printf("\n");
	va_end(ptr);
}
