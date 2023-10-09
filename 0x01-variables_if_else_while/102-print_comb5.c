#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C code programming print all
 *                 possible combanation of two two digit
 * Return: 0 (Success)
*/

int main(void)
{
	int firstnum = 0, scenum;
	while (firstnum < 100)
	{
		scenum = 0;
		while (scenum < 100)
		{
			if (firstnum < scenum)
			{
				putchar((firstnum / 10) + 48);
				putchar((firstnum % 10) + 48);
				putchar(' ');
				putchar((scenum / 10) + 48);
				putchar((scenum % 10) + 48);
 
	if (firstnum != 98 || scenum != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			scenum++;
		}
		firstnum++;
	}
	putchar('\n');
	return (0);
}
