#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the characters with C to stdout
 * Description: &C character to the print
 *
 * Return: on success 1.
 *	   on error. -1 returned, and error is set appropriately
*/
int _putchar(char C)
{
	return (write(1, &c, 1));

}
