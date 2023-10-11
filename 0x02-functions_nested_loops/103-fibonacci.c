#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the sum of the even-valued terms
 * Return: Always 0 (Success)
*/
int main(void)
{
	int count;
	unsigned long int fib1, fib2, sum, fib3;

	fib1 = 1;
	fib2 = 2;
	sum = 0;
	for (count = 1; count <= 33; ++count)
	{
		if (fib1 < 4000000 && (fib1 % 2) == 0)
		{
			sum = sum + fib1;

		}
		fib3 = fib1 + fib2;
		fib1 = fib2;
		fib2 = fib3;

	}
	printf("%lu\n", sum);

	return (0);
}
