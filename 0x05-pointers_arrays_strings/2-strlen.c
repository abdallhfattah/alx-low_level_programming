#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: the string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
