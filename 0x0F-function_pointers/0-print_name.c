#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - function that print name
 * @name: string of name
 * @f: a pointer that point to function
 * Return: 0 (success)
*/
void print_name(char *name, void (*f)(char *))
{
	if (f && name)
		f(name);
}
