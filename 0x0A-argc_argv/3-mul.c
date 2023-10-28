#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0 success 1 Error
*/
int main(int argc, char *argv[])
{
	int mul1, mul2, result;

	mul1 = atoi(argv[1]);
	mul2 = atoi(argv[2]);

	if (argc <= 3)
	{
		result = mul1 * mul2;
		printf("%d\n", result);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}
