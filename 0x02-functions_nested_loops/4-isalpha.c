#include "main.h"

/**
 * _isalpha - checking the character if its on alphabet or not
 * @c: is variable to check with ascii code.
 * Return: 1 if small otherwise 0
 */

int _isalpha(int c)
{
if ((96 < c && 123 > c) || (64 < c && 91 > c))
return (1);
else
return (0);
}
