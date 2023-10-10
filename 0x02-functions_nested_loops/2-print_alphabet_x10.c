#include "main.h"

/**
 * print_alphabet_x10 - Enty point to print print_alphabet ten time
 *
*/

void print_alphabet_x10(void)
{
	char line = 0, ch;

	for ( line = 0; line <= 9; line++)
		for ( ch = 'a'; ch <= 'z'; ch++)
			_putchar(ch);
	_putchar('\n');	

}
