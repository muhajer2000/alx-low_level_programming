#include "main.h"
#include <stdio.h>

/**
 *main - computes and prints the sum of all the multiples
 *of 3 or 5 below 1024
 * Return 0 Always Success
*/
int main(void)
{
	int sum3, sum5, sum, number;
	
	sum3 = 0;
	sum5 = 0;
	sum = 0;

	for (number = 0; number < 1024; ++number)
	{	
		if ((number % 3) == 0)
		{
			sum3 = sum3 + number;
		} else if ((number % 5) == 0)
		{
			sum5 = sum5 + number;
		
		}
		
	}
	sum = sum3 + sum5;
	printf("%d\n", sum);
	return (0);


}
