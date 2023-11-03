#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory
 * @b: is variable that allocat in memory
 * Return: NULL if malloc fail and tremaiante by 98
*/
void *malloc_checked(unsigned int b);
{
	char *contr;

	contr = malloc(b);
	if (contr == NULL)
	{
		return (98);
	}
	return (contr);
}
