#include "main.h"

/**
 * print_alphabet - print out the alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{

int i , j;
j = 10;
while(j--)
{
i = 0;
for (; i < 26; i++)
{
_putchar(i + 'a');
}

_putchar('\n');
}

}
