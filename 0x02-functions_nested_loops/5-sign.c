#include "main.h"

/**
 * print_sign - print sign of number
 * @n: int to check
 * Return: print 1 if n is greater than zero
 * 0 && print 0 if n is zero
 * -1 print - if n less than zero
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}
