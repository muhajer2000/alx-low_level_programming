#include <stdio.h>

/**
 * main - print size of verious type
 *
 * return 0 (succes)
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %d  byte(s)", sizeof(a));
	printf("size of an int: %d byte(s)", sizeof(b));
	printf("size of a long int: %d byte(s)", sizeof(c));
	printf("size of a long long int: %d byte(s)", sizeof(d));
	printf("size of a float: %d  byte(s)", sizeof(e));
	return (0);
}
