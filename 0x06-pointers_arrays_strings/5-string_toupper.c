#include "main.h"

/**
 * string_toupper - changes all lowercase letters of a string to uppercase
 * @a: string for modify
 *
 * Return: thr result string
*/
char *string_toupper(char *a)
{
	int c;

	for (c = 0; a[c] != '\0'; c++)
	{
		if (a[c] >= 'a' && a[c] <= 'z')
			a[c] = a[c] - 32;
	}

	return (a);
}
