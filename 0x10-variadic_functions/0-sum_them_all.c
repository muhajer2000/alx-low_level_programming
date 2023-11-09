#include "variadic_functions.h"
#include <stdlib.h>

/**
 * sum_them_all - a function that returns the sum of  parameters.
 * @n: number of arguments to add
 * @...: number of intger to add
 * Return: 0 if n == NULL
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list sum;
	int j = n, add = 0;

	if (n == 0)
		return (0);
	va_start(sum, n);
	while (j--)
		add += va_arg(sum, int);
	va_end(sum);
	return (add);
}
