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
		l_d = -1 * (n % 10);

	else
		l_d = n % 10;
	_putchar(l_d + '0');
	return (l_d);


}
