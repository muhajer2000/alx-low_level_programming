#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block
 *	using malloc and free
 * @ptr: a pointer to the memory previously allocated
 * @old_size: bytes, of the allocated space for ptr
 * @new_size: bytes of the new memory block
 * Return: NULL if fail  and new_size > old_size
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *a;
	int j;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)

		free(ptr);
		return (NULL);


	if (ptr == NULL)

		a = malloc(new_size);
		if (a == NULL)
			return (NULL);
		return (a);


	if (new_size > old_size)
	{
		a = malloc(new_size);
		if (a == NULL)
			return (NULL);

		for (j = 0; j < old_size && j < new_size; j++)
		{
			*((int *)a + j) = *((int *)ptr + j);
			free(ptr);
		}
	}
	return (a);
}
