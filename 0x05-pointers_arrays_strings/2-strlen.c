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

	for (contuner = 0; s[contuner] != '\0'; s++)
	{
		contuner++;
	}
	return (contuner);
