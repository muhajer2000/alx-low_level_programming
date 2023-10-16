#include "main.h"
#include <stdlib.h>
#include <time.h>

/**
 * main - generates random valid passwords for the program 101-crackme.
 *Rreturn: 0 
*/
int main(void)
{
	int sum;
	char g;

	srand(time(NULL));
	while (sum <= 2645)
	{
		g = rand() % 128;
		sum += g;
		putchar(g);
	}
	putchar(2772 - sum);
	return (0);

}
