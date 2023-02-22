#include "main.h"

/**
 * print_last_digit - printing last digit.
 *
 * @c: passing number to function.
 * Return: last digit of the number given.
 */

int print_last_digit(int c)
{
int last;

last = c % 10;
if (last < 0)
{
last = -last;
}
_putchar('0' + last);
return (last);
}
