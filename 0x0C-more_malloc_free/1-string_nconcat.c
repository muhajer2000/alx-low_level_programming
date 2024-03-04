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
	char *result;
	unsigned int lengths2, lengths1, i, j;

	lengths2 = strlen(s2);
	lengths1 = strlen(s1);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (n >= lengths2)
		n = lengths2;
	result = malloc(lengths1 + n + 1);
	if (result == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
	{
		result[i] = s1[i];

	}
	for (j = 0; j < n; j++)
	{
		result[i] = s2[j];
		i++;
	}
	result[i] = '\0';
	return (result);
}
