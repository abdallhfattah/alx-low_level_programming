#include "main.h"
/**
 * _strcpy - copies the string pointed to by src
 * @dest: will store the copy
 * @src: will be copied from
 * Return: return the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int j;

	while (src[i] != '\0')
		i++;

	for (j = 0; j <= i; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}
