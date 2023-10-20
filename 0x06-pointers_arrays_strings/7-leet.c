#include "main.h"

/**
 * leet - encodes a string into 1337.
 * @s: string modfiy
 * Return: to result string
*/
char *leet(char *s)
{

	char *cop = s;
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int num[] = {4, 3, 0, 7, 1};
	unsigned int i;

	while (*s)
	{
		for (i = 0; i < sizeof(key) / sizeof(char); i++)
		{
			if (*s == key[i] || *s == key[i] + 32)
			{
				*s = 48 + num[i];
			}
		}
		s++;
	}
	return (cop);

}
