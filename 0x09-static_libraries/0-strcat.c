#include "main.h"
/**
 * _strcat - cat 2 strings
 * @dest: string 1
 * @src: string 2
 * Return: pointer to array of char
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, i;

	while (dest[destlen])
	{
		destlen++;
	}

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[destlen] = src[i];
		destlen++;
	}

	dest[destlen] = '\0';
	return (dest);
}
