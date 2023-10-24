#include "main.h"
#include <stdio.h>

/**
 * set_string -  a function that sets the value of a pointer to a char.
 * @s: A pointer point to other pointer
 * @to: A pointer point to value
 * Return: Always 0 success
*/
void set_string(char **s, char *to)
{
	*s = to;
}
