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
	char chr = 'z';

	while (chr >= 'a')
	{
		putchar(chr);
		chr--;
	}
	putchar('\n');

	return (0);
}
