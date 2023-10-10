#include "main.h"

/**
 * print_alphabet_x10 - Enty point to print print_alphabet ten time
 *
*/

void print_alphabet_x10(void)
{
	char line = 0, ch;

	while (line <= 9)
	{
		ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;

		
		}
		line++;
	}
	_putchar("\n");

}
