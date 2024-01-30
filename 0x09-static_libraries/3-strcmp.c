#include "main.h"
/**
 * _strcmp - compares twe strings
 * @s1: first string
 * @s2: second string
 * Return: differrence between the first unmatched characters
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] && s2[i]; i++)
	{
		if (s1[i] != s2[i])
			break;
	}

	return (s1[i] - s2[i]);
}
