#include "main.h"

/**
 * binary_to_uint: convert binary number string to unsigned int
 * @b : string in binary number
 * Return: unsigned int form of b
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}
