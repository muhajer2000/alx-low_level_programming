#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _calloc - a function that allocates memory for an array
 * @nmemb: number of elements
 * @size: size of bytes to store
 * Return: nmemb or size is 0, then _calloc returns NULL othewise pointer
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (size == 0 || nmemb == 0)
		return (NULL);
	arr = malloc(sizeof(int) * nmemb);
	if (arr == NULL)
	{
		return (NULL);
	}
	memset(arr, 0, sizeof(int) * nmemb);

	return (arr);
}
