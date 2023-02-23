#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_times_table - printing table of size n + 1
 * Return: no Return value.
 * 
 */
void print_times_table(int n)
{
    int i , j, z;
    if (n >= 0 && n <= 15){

    for (i = 0; i <= n; i++)
    {
        z = 0;
       for (j = 0; j <= n; j++)
       {
        if (i != n || j != n)
            printf("%d,  ", z);
        else
            printf("%d", z);
        z = z + i;
       }

    }
    }
    
}