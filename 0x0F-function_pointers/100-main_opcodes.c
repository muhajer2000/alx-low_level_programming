#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: string of argument
 * Return: 0 (success)
*/
int main(int argc, char **argv)
{
	int a;
	char *ptr = (char *)main;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	a = atoi(argv[1]);
	if (a < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (a--)
		printf("%02hhx%s", *ptr++, a ? " " : "\n");
	return (0);
}
