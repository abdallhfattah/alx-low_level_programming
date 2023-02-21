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
        n = 122;
        while(n > 96){
               putchar(n--);
        }
        putchar('\n');
	return (0);
}   