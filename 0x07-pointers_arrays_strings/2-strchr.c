#include "main.h"
#include <stddef.h>
/**
 * _strchr - this function locates a character in a string
 * @s: string
 * @c: character
 * Return: pinter to a char
 */
char *_strchr(char *s, char c)
{
	int index = 0;

	while (s[index++])
	{
		if (c == s[index])
			return (&s[index]);
	}
	return (NULL);
}
