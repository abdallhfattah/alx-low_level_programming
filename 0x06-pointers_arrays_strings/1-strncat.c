#include "main.h"
/**
 * _strncat - cat 2 strings
 * @dest: string 1
 * @src: string 2
 * @n: n characters from string 2
 * Return: pointer to array of char
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0, i;

	while (dest[destlen])
	{
		destlen++;
	}

	for (i = 0; src[i] && i < n; i++)
	{
		dest[destlen++] = src[i];
	}

	return (dest);
}
