#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C code that print a quote by use write function
 *
 * Return: Always 1 (unsuccess)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" -Dora korpar, 2015-10-19\n", 59);
	return (1);
}
