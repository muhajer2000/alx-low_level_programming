#include "main.h"

/**
 * print_rev - print reverse string
 * @s: pointer that point to  print
*/
void print_rev(char *s)
{
	int x, y, length;

	x = 0;

	while (s[x] != '\0')
	{
		x++;
	}
	length = x;

	for (y = length - 1; y >= 0; y--)
	{
		_putchar(s[y]);
	}
	_putchar('\n');
}
