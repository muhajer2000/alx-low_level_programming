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
		_putchar(str[count]);
	}
	_putchar('\n');
}

