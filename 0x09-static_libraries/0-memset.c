#include "main.h"
#include <stdio.h>

/**
 * _memset - a function that fills memory with a constant byte.
 *
 * @s: Apointer of string array
 * @b: constant byte fills of bytes
 * @n:bytes of the memory area
 *
 * Return: A pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int num;

	for (num = 0; n > 0; num++, n--)
	{
		s[num] = b;
	}
	return (s);
}
