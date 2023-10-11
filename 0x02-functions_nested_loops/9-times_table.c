#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
*/
void times_table(void)
{
	int num, mult, proud;

	for (num = 0; num < 10; num++)
	{
		_putchar(48);
		for (mult = 1; mult < 10; mult++)
		{
			_putchar(',');
			_putchar(' ');
			proud = num * mult;

			if (proud < 10)

				_putchar(' ');
			else
				_putchar((proud / 10) + 48);
			_putchar((proud % 10) + 48);
		}
		_putchar('\n');
	}

}
