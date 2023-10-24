#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints the chessboard
 * @a: array of characters
 * Return: Always 0 (success)
*/
void print_chessboard(char (*a)[8])
{
	int x, y;

	x = 0;
	while (x < 8)
	{
		y = 0;
		while (y < 8)
		{
			_putchar(a[x][y]);
			y++;
		}
		x++;
		_putchar('\n');
	}
}
