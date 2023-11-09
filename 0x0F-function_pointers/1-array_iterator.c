#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator -  a function that executes a function given as a parameter
 * @array: array of intger numbers
 * @size: size of the array
 * @action: pointer point to function
 * Return: 0 (success)
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int *j = size + array - 1;

	if (size && action && array)
		do {
			action(*array++);
		} while (array <= j)
}
