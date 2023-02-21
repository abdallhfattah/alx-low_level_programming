#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entery point
 * 
 * Return: always 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        /* your code goes there */
        n = 0;
        while(n < 10){ 
                printf("%d" , n++);
        }
        putchar('\n');
	return (0);
}   