#include "main.h"

/**
 * array_range - a function that creates an array of integers
 * @max: high value in array
 * @min: minimun value in an array
 * Return: NULL if max > min
*/
int *array_range(int min, int max)
{
	int *arr;
	int i, len;

	len = max - min + 1;
	if (min > max)
		return (NULL);
	arr = malloc(len * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = min++;
	}
	return (arr);
}
