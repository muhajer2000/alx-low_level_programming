#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for any of a set of bytes
 * @s: string the search
 * @accept: string the bytes looking for
 *
 * Return: A pointer to byte in s or NULL such not found
*/
char *_strpbrk(char *s, char *accept)
{
	unsigned int x, y;
	char *ptr;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (accept[y] == s[x])
				ptr = &s[x];
				return (ptr);
		}
	}
	return (0);

}
