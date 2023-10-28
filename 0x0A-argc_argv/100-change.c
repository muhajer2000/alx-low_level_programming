#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0 success 1 error
*/
int main(int argc, char *argv[])
{
	int coins[] = {25, 10, 5, 2, 1};
	int i, cent = 0;
	int amount;

	if  (argc == 2)
	{
		for (i = 0; i < 5; i++)
		{
			if (amount >= coins[i])
			{
				amount = atoi(argv[1]);
				cent += amount / coins[i];
				amount = amount % coins[i];
				if (amount % coins[i] == 0)
				{
					break;
				}
			}
		}
	printf("%d\n", cent);
	}
	else if (argc > 0 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
