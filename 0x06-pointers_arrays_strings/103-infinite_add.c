#include "main.h"
#include <stdio.h>
/**
 * infinite_add - add 2 number together
 * @n1: text reper 1st number to add
 * @n2: text reper 2nd number to add
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling function
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0, j = 0, p, q = 0;
	int f, s, d = 0;

	while (n1[i] != '\0')
		i++;
	while (n2[j] != '\0')
		j++;
	if (i > j)
		q = i;
	else
		q = j;
	if (q + 1 > size_r)
		return (0);
	r[q] = '\0';
	for (p = q - 1; p >= 0; p--)
	{
		i--;
		j--;
		if (i >= 0)
			f = n1[i] - '0';
		else
			f = 0;

		if (j >= 0)
			s = n2[j] - '0';
		else
			s = 0;
		r[p] = (f + s + d) % 10 + '0';
		d = (f + s + d) / 10;
	}
	if (d == 1)
	{
		r[q + 1] = '\0';
		if (q + 2 > size_r)
			return (0);
		while (q-- >= 0)
			r[q + 1] = r[q];
		r[0] = d + '0';
	}
	return (r);
}
