#include "main.h"

/**
 * rev_string - reverse array
 * @n: intger params
 * return: 0
*/

void rev_string(char *n)
{
	int i = 0;
	int j = 0;
	char temp;

	while (*(n + i) != '\0')
	{
		i++;
	}
	i--;

	for (j = 0; j < i; j++; i--)
	{
		temp = *(n + j);
		*(n + j) = *(n + i);
		*(n + i) = temp;
	}

}

/**
 * infinite_add - a function that adds two numbers.
 * @n1: text repr 1st number
 * @n2: text repr 2nd number
 * @r: pointer to buffer
 * @size_r: buffer size
 * Return: pointer to calling
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int o_f = 0, x = 0, y = 0, num = 0;
	int val1 = 0, val2 = 0, t_tot = 0;

	while (*(n1 + x) != '\0')
		x++;
	while (*(n2 + y) != '\0')
		y++;
	x--;
	y--;

	if (y >= size_r || x >= size_r)
		return (0);
	while (y >= 0 || x >= 0 || o_f == 1)
	{
		if (x < 0)
			val1 = 0;
		else
			val1 = *(n1 + x) - '0';
		if (y < 0)
			val2 = 0;
		else
			val2 = *(n2 + y) - '0';
		t_tot = val1 + val2 + o_f;

		if (t_tot >= 10)
			o_f = 1;
		else
			o_f = 0;
		if (num >= (size_r - 1))
			return (0);
		*(r + num) = (t_tot % 10) + '0';
		num++;
		x--;
		y--;
	}
	if (num == size_r)
		return (0);
	*(r + num) = '\0';
	rev_string(r)
	return (r);
}
