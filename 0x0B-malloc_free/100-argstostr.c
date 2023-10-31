#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * argstostr - a function that concatenates all the arguments of your program
 * @ac: number of argements
 * @av: string of argements
 * Return: if ac == 0 (NULL) and pointer to
 *	new string or NULL if falis
*/
char *argstostr(int ac, char **av)
{
	int a, b, count, arr;
	char *c;

	count = 0;
	arr = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	a = 0;
	while (a < ac)
	{
		count += strlen(av[a]);
		count++;
		a++;
	}
	c = malloc(sizeof(char) * count + 1);
	if (c == 0)
		return (NULL);
	while (a < ac)
	{
		for (b = 0; av[a][b] != '\0'; j++, arr++)
			c[arr] = av[a][b];
		c[arr] = '\n';
		arr++;
		a++;
	}
	c[arr] = '\0';
	return (c);
}
