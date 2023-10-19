#include "main.h"

/**
 * _strcat - concatenates two strings.
 * @dest: string to append to
 * @src: string add to dest
 *
 * Return: pointer to result string
*/

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0

	while (dest[i])

		i++;
	for (j = 0; src[j]; j++)

		dest[i++] = src[j];
	return (dest);

}
