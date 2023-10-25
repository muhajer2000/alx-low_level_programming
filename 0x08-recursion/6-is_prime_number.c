#include "main.h"

/**
 * is_prime_number - a function that returns input intger prime number
 *
 * @n: intger of input number
 * @i:intger number to input
 *
 * Return: 1 if the input integer is a prime number,
 * otherwise return 0.
*/
int correct(int n, int i);
int is_prime_number(int n)
{
	return (correct(n, 2));
}

/**
 * correct - Entry point of A function to check inputs
 * @n: intger of input number
 * @i: input number
 * Return: i
*/
int correct(int n, int i)
{
	if (n % i == 0 || n <= 1)
	{
		return (0);
	} else if (i >= n && n > 1)
	{
		return (1);
	}
	return (correct(n, i + 1));
}

