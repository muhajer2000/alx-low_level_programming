#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C code that print a quote by use write function
 *
 * Return: Always 1 (unsuccess)
*/

int main(void)
{
	char quo[] = "and that piece of art is useful\" -Dora korpar, 2015-10-19\n";

	write(1, quo, 59);
	return (1);
}
