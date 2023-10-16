#include "main.h"

/**
 * swap_int - swap the value of two pointers
 *
 * @a: pointer of first value
 * @b: pointers of second value
*/
void swap_int(int *a, int *b)
{
	int contuner;

	contuner = *a;
	*a = *b;
	*b = contuner;
}
