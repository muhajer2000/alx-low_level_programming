#include <stdio.h>

/**
 * main - Entry point 
 *
 * Description : write C code print tow digit number
 *
 * return 0 always succses
*/
int main(void)
{
	int number1 = 0, number2;
	while (number1 <= 9)
	{
		number2 = 0;
		while ( number2 <= 9)
		{
			if (number1 != number2	&& number1 < number2)
			{
		 		putchar(number1 + 48);
				putchar(number2 + 48);
			}
				if ((number1 + number2) != 17)
				{
					putchar(',');
					putchar(' ');
				}
				number2++;
		}
		number1++;	
	}
	
	putchar('\n');
	return (0);

}
