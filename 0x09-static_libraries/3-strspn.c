#include "main.h"
#include <stdio.h>

/**
 *  _strspn - a function that gets the length of a prefix substring
 *  @s: A pointer of string
 *  @accept: A pointer of  strings
 *  Return: number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int X_len, Y_len;

	for (X_len = 0; s[X_len] != '\0'; X_len++)
	{
		for (Y_len = 0; accept[Y_len] != s[X_len]; Y_len++)
		{
			if (accept[Y_len] == '\0')
				return (X_len);
		}
	}
	return (X_len);
}
