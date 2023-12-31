#include "main.h"
#include <stdio.h>

/**
 * create_array - function that creates an array of chars
 * @size: size of byte to stor
 * @c: A character to stor in memory
 * Return: NULL if equal 0 and pointer if NULL fail
*/
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	ptr = (char *) malloc(size * sizeof(char));

	if (ptr == NULL)
		return (0);

	for (i = 0; i < size; i++)
	{
		*(ptr + i) = c;

	}
	*(ptr + i) = '\0';
	return (ptr);
}
