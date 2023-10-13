#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * followed by a new line
*/
void more_numbers(void)
{
	int row, count;

	for (row = 0; row < 10; row++)
	{
		for (count = 0; count < 15; count++)
		{

			if (count >= 10)
			{
				_putchar(count / 10 + 48);
			_putchar(count % 10 + 48);
			}
		}
		_putcahr('\n');


	}

}
