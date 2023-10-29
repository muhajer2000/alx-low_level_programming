#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: Always 0 success 1 error
*/
int main(int argc, char *argv[])
{
	int money, i, amount;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc > 2 || argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	amount = 0;

	if (money < 0)
	{
		printf("0\n");
		return (0);
	}

	for (i = 0; i < 5 && money >= 0; i++)
	{
		while (money >= coins[i])
		{
			amount++;
			money -= coins[i];
		}
	}
	printf("%d\n", amount);
	return (0);
}
