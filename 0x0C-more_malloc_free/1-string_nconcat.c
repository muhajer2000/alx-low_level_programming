#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: sring of element to locate
 * @s2: string of element to concacnate
 * @n: number of element
 * Return: "" if NULL 0 if NULL
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	int len1, len2, a, b;

	len1 = strlen(s1);
	len2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	str = malloc(len1 + n + 1);
	if (str == NULL)
		return (NULL);
	for (a = 0; s1[a] != '\0'; a++)
	{
		str[a] = s1[a];
	}
	for (b = 0; s2[b] != '\0'; b++)
	{
		str[a] = s2[b];
		a++;
	}
	str[a] = '\0';
	return (str);
}
