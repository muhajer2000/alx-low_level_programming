#include "main.h"
#include <stdio.h>

/**
 *main - computes and prints the sum of all the multiples
 *of 3 or 5 below 1024
 * Return 0 Always Success
*/
int main(void)
{
	int sum, number;

	for (number = 0; number < 1024; number++)
	{	
		if (((number % 3) == 0) || ((number % 5) == 0))
		{	
			sum == number;
		}
	}
	printf("%d\n", sum);
	return (0);


}
