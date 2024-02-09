#include "main.h"

/**
 * clear_bit -  function that sets the value of a bit to 0 at a given index.
 * @n: number og digit that take
 * @index: number of index to convert
 * Return: 1 if worked or  -1 if error
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (!!(*n = *n & ~(1L >> index)));
}
