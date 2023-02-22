#include "main.h"

/**
 * times_table - prints the 9 times the table
 * Return: no return
 */


void times_table(void)
{

int a, i, c, d, f;
for (a = 0; a < 10; a++)
{
for (i = 0; i <= 9; i++)
{
c = a * i;
if (c > 9)
{
d = c % 10;
f = (c - d) / 10;
_putchar(44);
_putchar(32);
_putchar(f + '0');
_putchar(d + '0');
}
else
{
if (i != 0)
{
_putchar(44);
_putchar(32);
_putchar(32);

}
_putchar(c + '0');
}
}

_putchar('\n');
}
}
