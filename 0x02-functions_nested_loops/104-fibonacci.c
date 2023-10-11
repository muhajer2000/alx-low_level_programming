#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * Description: finds and prints the first 98 Fibonacci numbers
 * Return: ALways 0 (Success)
*/
int main(void)
{
	unsigned long int count, fib1, fib2, fib11, fib12, fib21, fib22;

        fib1 = 1;
	fib2 = 2;

	printf("%lu", fib1);
	
	for (count = 1; count < 91; count++)
	{
		printf(", %lu", fib2);
		fib2 = fib2 + fib1;
		fib1 = fib2 - fib1;

	}
	fib11 = fib1 / 1000000000;
	fib12 = fib1 % 1000000000;
	fib21 = fib2 / 1000000000;
	fib22 = fib2 % 1000000000;

	for (count = 92; count < 99; ++count)
	{
		printf(", %lu", fib21 + ( fib22 / 1000000000));
		printf("%lu", fib22 % 1000000000);
		fib21 = fib21 + fib11;
		fib11 = fib21 - fib11;
		fib22 = fib22 + fib12;
		fib21 = fib22 - fib12;		
	}
	printf("\n");
	return (0);
	


}
