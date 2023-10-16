#include "main.h"

/**
 * _puts - print string to stdout
 * @str: pointer to the print string
*/
void _puts(char *str)
{
	int count;

	for (count = 0; str[count] != '\0'; count++)
	{
		putchar(str[count]);
	}
	putchar('\n');

