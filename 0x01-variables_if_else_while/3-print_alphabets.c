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
	char CH = 'A';

        while (ch <= 'z')
        {
                putchar(ch);
                ch++;
        }
                
       
	
	while (CH <= 'Z')
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
