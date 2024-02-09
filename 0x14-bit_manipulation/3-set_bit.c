#include "main.h"

/**
 * set_bit -  a function that sets the value of a bit to 1 at a given index
 * @n: number of digit that set for
 * @index: number of index that convrt to
 * Return: 1 if worked or -1 if error
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (*n);

}
