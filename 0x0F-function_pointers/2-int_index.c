#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  a function that searches for an integer.
 * @array: array of intger numbers
 * @size: size of  number of elements in the array
 * @cmp: a pointer to the function
 * Return: -1 If no element matches
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (cmp && size && array)
		for (j = 0; j < size; j++)
		{
			if (cmp(array[j]))
				return (j);
		}
	return (-1);
}
