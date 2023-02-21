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

        n = 0;
        while(n < 10)
        { 
                printf("%d" , n++);
        }
        putchar('\n');
	return (0);
}   