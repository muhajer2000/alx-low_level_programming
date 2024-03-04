#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block
 * @ptr: a pointer to the memory previously allocated
 * @old_size: bytes, of the allocated space for ptr
 * @new_size: bytes of the new memory block
 * Return: NULL if fail and new_size > old_size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int j;
	char *a;

	if (ptr == NULL)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);
	}
	if (new_size > old_size)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		for (j = 0; j < old_size && j < new_size; j++)
			*((char *)a + j) = *((char *)ptr + j);
		free(ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (a);
}
