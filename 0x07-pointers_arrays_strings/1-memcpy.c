#include "main.h"

/**
 * _memcpy - this function copies memory area
 * @dest: destination
 * @src: source
 * @n: size
 * Return: pointer to array of char
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
