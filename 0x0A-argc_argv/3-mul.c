#include <stdio.h>
#include <stdlib.h>

int _atoi(char *s);
/**
 * _atoi - convert a string to an integer.
 *
 * @s: pointer point to numbers
 * Return: the int converted from the string
*/
int _atoi(char *s)
{
	unsigned int num = 0;
	int digit = 1;

	do {
		if (*s == '-')
			digit *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
		} while (*s++);
		return (num * digit);
}

/**
 * main - Entry point
 * @argc: number of arguments
 * @argv: string of arguments
 * Return: 0 success 1 Error
*/
int main(int argc, char *argv[])
{
	int mul1, mul2, result;

	mul1 = _atoi(argv[1]);
	mul2 = _atoi(argv[2]);

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
