#include "main.h"

/**
 * print_binary - function to print int binary number
 * @n: unsigned int number
 *
 * Return: binary number
*/
void print_binary(unsigned long int n)
{
	int bits = sizeof(n) * 8;
	int pasted = 0;

	while (bits)
	{
		if (n & 1L << --bits)
		{
			_putchar('1');
			pasted++;
		}
		else if (pasted)
			_putchar('0');
	}
	if (!pasted)
		_putchar('0');

}
