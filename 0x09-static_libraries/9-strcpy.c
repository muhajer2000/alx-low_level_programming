#include "main.h"

/**
 * * _strcpy - copies the string pointed to by src
 * @dest: pointer taht point string
 * @src: string pointer copy
 * Return: dest value
*/
char *_strcpy(char *dest, char *src)
{
	int count, x;

	count = 0;

	while (src[count] != '\0')
	{
		count++;
	}

	for (x = 0; x < count; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';
	return (dest);

}
