#include "main.h"

/**
 * is_palindrome - a function that returns 1
 *	if a string is a palindrome and 0 if not
 * @s: pointer of string characters
 * @n: intger of iterater
 * @l:string length
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int correct(char *s, int n, int l);
int _strlen_recursion(char *s);
int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (0);
	}
	return (correct(s, 0, _strlen_recursion(s)));
}

/**
 * correct - check the character recursive
 * @s: string to correct
 * @n: intger of iterator
 * @l: string length
 * Return: 1 if a string is a palindrome and 0 if not.
*/
int correct(char *s, int n, int l)
{
	if (*(s + n) != *(s + l - 1))
	{
		return (0);
	} else if (n >= l)
	{
		return (1);
	}
	return (correct(s + n + 1, l - 1));
}
/**
 * _strlen_recursion - count the length of string
 * @s: string to count their characters
 * Return: string length
*/
int _strlen_recursion(char *s)
{
	if (*s >= '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
