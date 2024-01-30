#include "main.h"
/**
 * _memset - funtion that fills memory with a constant byte
 * @s: memory
 * @b: byte
 * @n: size
 * Return: pointer to array of char
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
