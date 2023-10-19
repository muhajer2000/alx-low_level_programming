#include "main.h"

/**
 * _strncat -  a function that concatenates two strings by n.
 *
 * @dest: destantion string
 * @src: source string
 * @n: number of byte
 * Return: apointer to result string
*/
char *_strncat(char *dest, char *src, int n)
{
	int c1, c2;

	c1 = 0;
	c2 = 0;

	while (dest[c1] != '\0')
		c1++;

	while (src[c2] != '\0' && c2 < n)
	{
		dest[c1] = src[c2];
		c1++;
		c2++;

	}

	dest[c1] = '\0';

	return (dest);

}
