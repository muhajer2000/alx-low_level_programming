#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * followed by a new line
*/
void more_numbers(void)
{
	int line;

	for (line = 0; line < 10; line++)
	{
		if (line == 2 || line == 4)
			continue;
		_putchar(line + 48);

	}
	_putchar('\n');

}
