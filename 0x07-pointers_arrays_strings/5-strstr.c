#include "main.h"
#include <stdio.h>

/**
 * _strstr -  function finds the first occurrence of the substring
 * @haystack: string the look for NULL byte  are not compared
 * @needle: string search for
 * Return: A pointer  to the beginning of the located substring
 *	or NULL if the substring is not found
*/
char *_strstr(char *haystack, char *needle)
{
	int x, y;
	char *ptr;

	for (x = 0; haystack[x] != '\0'; x++)
	{
		for (y = 0; needle[y] != '\0'; y++)
		{
			if (haystack[x + y] !=  needle[y])
			{
				break;
			}
		}
		if (!needle[y])
		{
			ptr = &haystack;
			return (ptr);
		}
	}
	return (0);
}
