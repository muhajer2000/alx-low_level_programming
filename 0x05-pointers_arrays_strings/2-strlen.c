#include "main.h"

/**
 * _strlen - return the length of a string
 *
 * @s: string of value
 *
 * Return: the length of the string
*/
int _strlen(char *s)
{
	int contuner;

	contiuner = 0;

	while (s[contuner] != '\0')
	{
		contuner++;
	}
	return (contuner);
}
