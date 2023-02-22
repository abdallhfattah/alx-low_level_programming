#include "main.h"

/**
 * _islower - checking the character if its small or not
 * int c is variable to check with ascii code.
 * Return: 1 if small otherwise 0
 */

int _islower(int c)
{
if (96 < c && 123 > c)
return (1);
else
return (0);
}
