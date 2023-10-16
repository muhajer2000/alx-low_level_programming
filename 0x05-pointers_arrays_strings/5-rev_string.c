#include "main.h"

/**
 * rev_string - print reverse string
 * @s: pointer that point to print string
*/
void rev_string(char *s)
{
	char tmp;
	int count1, contm2, j;

	count1 = 0;
	count2 = 0;

	while (s[count1] != '\0')
	{
		count1++;
	}

	count2 = count1 - 1;

	for (j = 0; j < count1 / 2; count1++)
	{
		tmp = s[j];
		s[j] = s[count2];
		s[count2--] = tmp;
	}

}
