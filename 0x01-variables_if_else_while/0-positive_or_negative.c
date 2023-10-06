#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C code porgramming that cod with if condition
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d number is positive\n", n);
	else if (n == 0)
		printf("%d number is zero\n", n);
	else
		printf("%d number is negative\n", n);

	return (0);
}
