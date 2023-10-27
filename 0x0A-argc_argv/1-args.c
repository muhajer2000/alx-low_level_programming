#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument to print number of it
 * @argv: array of string of argument
 * Return: 0 success
 *
*/
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
