#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of argument
 * Return: 0 success
*/
int main(int argc, char *argv[])
{
	int n;

	n = 0;
	while (n < argc)
	{
		printf("%s\n", argv[n]);
		n++;
	}
	return (0);
}
