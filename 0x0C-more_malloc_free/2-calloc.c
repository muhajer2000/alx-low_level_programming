#include "main.h"
#include <string.h>

/**
 * _nmem - function fill memory
 * @str: string of pointer
 * @i: character that fill by
 * @n: number of character
 * Return: 0 success and str if NULL
*/
char *_nmem(char *str, char i, unsigned int n)
{
	char *s = str;

	while (n--)
		*str++ = i;
	return (str);
}
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

	arr = malloc(nmemb * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}

	_nmem(arr, 0, sizeof(int) * nmemb);

	return (arr);
}
