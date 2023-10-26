#include "main.h"

/**
 * wildcmp - a function that compares two strings
 * @s1: A string to compare
 * @s2: A string can contain the special character *
 * Return:  returns 1 if the strings can be considered identical,
 *	otherwise return 0.
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '\0' && *s1 == '\0')
	{
		return (1);
	} else if (*s2 == '*' && *(s2 + 1) != '\0' && *s1 == '\0')
	{
		return (0);
	} else if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	} else if (*s2 == '*')
	{
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	return (0);
}
