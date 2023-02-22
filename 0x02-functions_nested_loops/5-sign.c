#include "main.h"

/**
 * print_sign: checks the sign of number given.
 * @n: the number that is being checked.
 * Return: 1 if greater than zero , 0 if equal to zero , -1 is negative.
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
