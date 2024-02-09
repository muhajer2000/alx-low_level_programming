#include "main.h"

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * @n: number need to filp
 * @m: number need to filp to
 * Return: number of filps
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor = n ^ m;
	int num = 0;

	while (xor)
	{
		if (xor & 1ul)
			num++;
		xor = xor >> 1;
	}
	return (num);
}
