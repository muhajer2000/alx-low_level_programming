#include "main.h"
#include <stdio.h>

/**
 * _strchr - A function that locates a character in a string
 * @s: pointer that stored
 * @c: aA character to be located
 * Return: s or NULL if not found
*/
char *_strchr(char *s, char c)
{
	int num;

	for (num = 0; s[num] >= NULL; num++)
	{
		if (s[num] == c)
		{
			return (s + num);
		}
	}
	return ('\0');
}
