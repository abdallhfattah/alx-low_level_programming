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
        n = 97;
        while(n < 123){ 
               putchar(n++);
               if(n == 101){
                        n++;
                        continue;
               }
               else if(n == 113){
                        n++;
                        continue;
               }
        }
        putchar('\n');
	return (0);
}   