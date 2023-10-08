#include <stdio.h>
#include <stdlib.h>
#include <time>

/**
 * main - Entry point
 *
 * Description: A C code porgramming that code while loop function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
        int num1 = 0;
	int num2, num3;
        while (num1 <= 9)
        {
                num2 = 0;

                while (num2 <= 9)
                {
			num = 0;
			while (num3 <= 9)
			{
				if(num1 != num2 &&
				   num1 < num2 &&
				   num2 != num3 &&
				   num2 < num3)
			}
				

                        if((num1 != num2) && (num1 < num2))
                        {
                                putchar(num1 = 48);
                                putchar(num2 =48);

                                if (num1 + num2 !=12)
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                        num2++;
                }
                num1++;
        }
        putchar('\n');

        return(0);
}
