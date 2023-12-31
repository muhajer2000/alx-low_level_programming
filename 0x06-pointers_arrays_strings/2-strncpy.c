#include "main.h"

/**
 * _strncpy - a function that copies a string.
 *
 * @dest:destinetion string
 * @src: source string
 * @n:number of bytes
 *
 * Return: result pointer of string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int c1;

	c1 = 0;


	while (src[c1] != '\0' && c1 < n)
	{
		dest[c1] = src[c1];
		c1++;
	}

	while (c1 < n)
	{
		dest[c1] = '\0';
		c1++;
	}

	return (dest);

}
