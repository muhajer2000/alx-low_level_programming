#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the characters with c to stdout
 * Description: &C character to the print
 *
 * Return: no success 1.
 *          no error. -1 returned, and error is set appropriately
*/

int _putchar(char C)
{
	return (write(1, &c, 1));
}
