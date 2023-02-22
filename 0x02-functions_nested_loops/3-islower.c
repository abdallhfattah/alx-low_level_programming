#include "main.h"

/**
 * _islower - checking the character if its small or not
 * Return: 1 if small otherwise 0
 */

int _islower(int c)
{
if(96 < c && c < 123)
return (1);
else
return (0);
}
