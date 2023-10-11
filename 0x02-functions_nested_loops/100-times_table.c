#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 *
 * @n: number of the times table
 *
*/
void print_times_table(int n)
{
	int proud, mult, num;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{	
			_putchar(48);
			
			
			for (mult = 1; mult <= n; mult++)
			{	
				_putchar(',');
				_putchar(' ');
				proud = num * mult;

				if (proud <= 9)
					_putchar(' ');
				if (proud <= 99)
					_putchar(' ');
				if (proud >= 100)
				{
					_putchar((proud / 100) + 48);
					_putchar((proud / 10) % 10 + 48);

				}
				else if ( proud <= 99 && proud >= 10)
					
					_putchar((proud / 10) + 48);
				_putchar((proud % 10 ) + 48);
			}	
		}	_putchar('\n');

	}		

}
