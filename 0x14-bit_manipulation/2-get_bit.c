#include "main.h"

/**
 * get_bit - function to get bit by index
 * @n: number to get *bit number from it
 * @index: number of index to get bit number
 *
 * Return: value by index
*/
int get_bit(unsigned long int n, unsigned int index)
{


	if (index >= (sizeof(n)*8))
		return (-1);
	return (n >> index & 1);
}
