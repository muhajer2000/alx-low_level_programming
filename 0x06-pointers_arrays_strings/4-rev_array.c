#include "main.h"

/**
 * reverse_arra -  reverses the content of an array of integers
 * @a: an array of intger
 * @n:number of elements of the array
*/
void reverse_array(int *a, int n)
{
	int c1, c2, tmp;

	c2 = n - 1;

	for (c1 = 0; c1 < n / 2; c1++)
	{
		tmp = a[c1];
		a[c1] = a[c2];
		a[c2--] = tmp;
	}
}
