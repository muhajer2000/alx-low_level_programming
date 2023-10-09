#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 *
 * Description: A C code programming print qoute file un success
 *
 * Return: 1 (unsuccess)
*/

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
