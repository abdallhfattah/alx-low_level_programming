#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entery point
 * 
 * Return: always 0
 */

int main(void)
{
	int n;

        n = 97;
        while(n < 123)
        {
               putchar(n++);
        }
        putchar('\n');
	return (0);
}