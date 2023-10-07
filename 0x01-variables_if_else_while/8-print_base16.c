#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C code porgramming that code while loop function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);

		if (num == 57)
			num += 39;
		num++;
	}
	putchar('\n');
	
	return (0);
}
