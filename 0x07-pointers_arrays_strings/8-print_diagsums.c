#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - a function that prints the sum of the two diagonals
 *	of a square matrix of integers.
 * @a: array of matrix numbers
 * @size: size of array
 * Return: Always 0 success
*/
void print_diagsums(int *a, int size)
{
	int x, sum1 = 0, sum2 = 0;

	x = 0;
	while (x < size)
	{
		sum1 += a[x];
		sum2 += a[size - x - 1];
		a += size;
		x++;
	}
	printf("%d, ", sum1);
	printf("%d\n", sum2);
}
