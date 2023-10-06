#include <stdio.h>
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

	if(n>0)
		printf("number is positive\n");
	if(n==0)
		printf("number is zero\n");
	if(n<0)
		printf("number is negative\n");
	return (0);
}
