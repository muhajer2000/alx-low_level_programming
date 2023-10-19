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


	while (dest[c1] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);

}
