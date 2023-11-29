#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination of the copy
 * @src: string to be copied
 * @n: n characters to be copied from src
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
