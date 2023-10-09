#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Description: A C code porgramming that code while loop function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int number1 = 0, number2, number3;

	while (number1 <= 9)
	{
		number2 = 0;
		while (number2 <= 9)
		{
			number3 = 0;
			while (number3 <= 9)
			{
				if (number1 != number2 &&
				   number1 < number2 &&
				   number2 != number3 &&
				   number2 < number3)
				{
					putchar(number1 + 48);
					putchar(number2 + 48);
					putchar(number3 + 48);

					if (number1 + number2 + number3 != 24)
					{
						putchar(',');
						putchar(' ');
					}
				}
				number3++;
			}
			number2++;
		}
		number1++;
	}
	putchar('\n');
	return (0);
}
