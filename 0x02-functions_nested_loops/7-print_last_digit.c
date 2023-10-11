#include "main.h"

/**
 * print_last_digit - print the last digit of a number
 * @n: int extract to last digit
 * Return: value of last digit
*/
int print_last_digit(int n)
{
	int l_d;

	if (n < 0)
		n = -n
	l_d = n % 10;

	if (l_d < 0)
	{
		l_d = -l_d
	_putchar(l_d + 48);
	return (l_d);
	}


}
