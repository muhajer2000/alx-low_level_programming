#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number og arguments
 * @argv: string of arguments
 * Return: 0 success 1 Error
*/
int main(int argc, char *argv[])
{
	int add = 0;
	char *a;

	while (--argc)
	{
		for (a = argv[argc]; *a; a++)
			if (*a < '0' || *a > '9')
			{
				(printf("Error\n"));
				return (1);
			}

		add += atoi(argv[argc]);
	}
	printf("%d\n", add);
	return (0);
}
