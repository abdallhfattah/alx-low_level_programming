#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 * Return: always 0
 */

int main(void)
{
        int n;

        n = 48;
        while (n < 58)
        {
        putchar (n++);
        if(n != 58)
        {
        putchar(',');
        putchar(' ');
        }
        }

        putchar ('\n');
	return (0);
}