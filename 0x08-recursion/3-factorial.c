#include "main.h"

/**
 * factorial - a function that returns the factorial of a given number.
 * @n: number that lower than 0
 * Return: function should return -1 to indicate an error
*/
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	} else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
