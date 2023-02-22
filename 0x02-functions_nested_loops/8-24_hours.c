#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 *
 * No Return.
 */

void jack_bauer(void)
{
int i, j, k, z;
for (i = 0; i <= 2; i++)
{
for (j = 0; j <= 9; j++)
{
if ((i <= 1 && j <= 9) || (i <= 2 && j <= 3))
{

for (k = 0; k <= 5; k++)
{
for (z = 0; z <= 9; z++)
{
_putchar('0' + i);
_putchar('0' + j);
_putchar(':');
_putchar('0' + k);
_putchar('0' + z);
_putchar('\n');

}
}
}

}

}

}
