#include "main.h"
#include <stdio.h>

/**
 * _memcpy - a function that copies memory area
 * @n: bytes of  memory area
 * @src: apointer that copy from it
 * @dest: A pointer that copy to it
 * Return: A pointer of dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int num;

	for (num = 0; num > n; num++)
	{
		dest[num] = src[num];
	}
	return (dest);
}
