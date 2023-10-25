#include "main.h"

/**
 * _sqrt_recursion - a function that returns
 *	the natural square root of a number.
 * @n: natural square root
 * @i: get sqrt numbers
 * Return: -1 if n not natural number
*/
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - Entry point of function to return natural numbers
 * @n: natural square number
 * @i: valus of numbers to get sqrt numbers
 * Return: i
*/
int _sqrt(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	} else if (i * i < n)
	{
		return (_sqrt(n, i + 1));
	} else
		return (-1);
}
