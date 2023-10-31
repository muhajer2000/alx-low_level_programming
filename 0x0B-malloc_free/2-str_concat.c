#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * str_concat - A function that concatenates two strings.
 * @s1: string of concatenates
 * @s2: adding string of concatenates
 * Return: always 0 success  treat it as an empty string
 *	NULL passed
*/

char *str_concat(char *s1, char *s2)
{
	int cont1, cont2, j;
	char *str;

	if (s1 == NULL)
		s1 = "\0";
	if (s2 == NULL)
		s2 = "\0";
	cont1 = strlen(s1);
	cont2 = strlen(s2);

	str = (void *)malloc((cont1 + cont2) * sizeof(char) + 1);
	if (str == 0)
		return (0);
	for (j = 0; j <= cont1 + cont2; j++)
	{
		if (j < cont1)
			str[j] = s1[j];
		else
			str[j] = s2[j - cont1];
	}
	str[j] = '\0';
	return (str);
	free(str);
}
