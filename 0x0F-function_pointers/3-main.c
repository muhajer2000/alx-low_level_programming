#include "3-calc.h"
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: string of argument
 * Return: 0 (success)
*/
int main(int argc, char **argv)
{
	int x, y;
	int (*func_opr)(int, int);

	if (argc != 4)
		printf("Error\n"), exit(98);

	x = atoi(argv[1]);
	y = atoi(argv[3]);

	func_opr = get_op_func(argv[2]);
	if (!func_opr)
		printf("Error\n"), exit(99);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && !y)
		printf("Error\n"), exit(100);

	printf("%d\n", func_opr(x, y));
	return (0);
}
