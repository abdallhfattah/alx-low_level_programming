#include "main.h"

/**
 * print_sign: checks the sign of number given
 * @n: the number
 * Return: 1 if greater than zero
 * Return: 0 if equal to zero
 * Return: -1 if less than zero
 */

int print_sign(int n)
{
if (n > 0)
    return (1);
else if (n == 0)
    return (0);
else
    return (-1);

}
