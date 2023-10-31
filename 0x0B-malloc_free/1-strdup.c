#include "main.h"
#include <stdio.h>

/**
 * _strdup - a function that returns a pointer to
 *	a newly allocated space in memory.
 * @str: apointer that store string
 * Return: NULL if str = NULL
 *	and a pointer to the duplicated string (success)
 *	NULL if insufficient memory was available
*/
char *_strdup(char *str)
{
	int size, a;
	char *str_dup;

	if (str == NULL)
		return (NULL);


	while (str[size] != '\0')
	{
		//size++;
	}
	size++;

	str_dup = malloc(size * sizeof(*str) + 1);

	if (str_dup == 0)
		return (NULL);

	else
	{
		while (a < size)
		{
			str_dup[a] = str[a];
			a++;
		}
	}
	return (str_dup);
}
