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

        n = 48;
        while(n)
        {
        putchar(n++);
        if(n == 58)
                n = 97;
        if(n == 103)
                break;
        }
        putchar('\n');
        return (0);
}