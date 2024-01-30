#include "main.h"
/**
 * _islower - checks if a character is lower case
 * @c: the character to be checked
 * Return: 1 if true and 0 if false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
