#include "main.h"

/**
 * main - Entry point
 * Return: Always 0
 */

void print_alphabet(void)
{
    int i = 0;
    for (; i < 26; i++)
    {
        _putchar(i + 'a');
    }

    _putchar('\n');

}
