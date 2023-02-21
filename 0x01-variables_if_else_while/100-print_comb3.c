#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 * Return: always 0
 */

int main(void)
{
        int i, j;

        i = 0;
        j = 0;
        for(i = 0; i < 9; i++)
        {
                for (j = i + 1; j <= 9; j++)
                {
                        putchar(i + '0');
                        putchar(j + '0');
                        if(i < 8)
                        {
                        putchar(',');
                        putchar(' ');
                        }
                }
                
        }

        putchar('\n');
	return (0);
}