#include "main.h"

/**
 *_isalpha - check alphabetic character
 *@c: for check character
 *Return: 1 if c letter otherwise 0
*/

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));

}
