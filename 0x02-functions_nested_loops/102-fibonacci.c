#include "main.h"

/**
 * main - Entry point
 * Description: prints the first 50 Fibonacci numbers, starting with 1 and 2
 *followed by a new line
 * Return: Always 0 (Success)
*/
int main(void)
{
	long int count, sum, fib1, fib2;

	fib1 = 1;
	fib2 = 2;

	for (count = 1; count <= 50; ++count)
	{
		if (fib1 != 20365011074)
		{
			printf("%ld, ", fib1);

		} else
		{
			printf("%ld\n", fib1);

		}
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;
	}
	return (0);

}
