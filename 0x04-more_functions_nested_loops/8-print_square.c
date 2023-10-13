#include "main.h"

/**
 * print_square - prints a square, followed by a new line;
 * @size: size of the square
*/
void print_square(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	} else
	{
		int A, B;

		for (A = 0; A < size; A++)
		{
			for (B = 0; B < size; B++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}


}
