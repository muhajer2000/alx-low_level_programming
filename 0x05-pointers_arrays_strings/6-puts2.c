#include "main.h"

/**
 * puts2 - print character of string
 * @str: pointer to print character
*/
void puts2(char *str)
{
	int i, length;

	length = 0;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
