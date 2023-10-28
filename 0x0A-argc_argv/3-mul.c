#include <stdio.h>
#include "main.h"


/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0 success 1 Error
*/
int main(int argc, char *argv[])
{
	int mul1, mul2, result;

	if (argc > 3 || argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		result = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", result);
	}
	return (0);
}
