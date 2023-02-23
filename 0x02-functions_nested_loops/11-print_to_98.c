#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_to_98 - printing to 98.
 * @n: variable to check the number it self.
 *
 */
void print_to_98(int n)
{

if (n < 98)
{
for (; n <= 98; n++)
{

if (n == 98)
{
printf("%d", n);
break;
}
printf("%d, ", n);
}
}
else
{
for (; n >= 98; n--)
{
if (n == 98)
{
printf("%d", n);
break;
}
printf("%d, ", n);
}
}
printf("\n");
}
