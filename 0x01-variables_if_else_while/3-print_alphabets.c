#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: A C code porgramming that code while loop function
 *
 * Return: Always 0 (success)
*/

int main(void)
{
        char ch = 'a';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
                putchar('\n');
       
	char CH = 'A';
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
		putchar('\n');
	return (0);
}
