#include "main.h"
/**
 * string_toupper - converts lowercase letters to uppercase
 * @str: string to be converted
 * Return: array of char
 */
char *string_toupper(char *str)
{
	int strlen = 0;

	while (str[strlen])
	{
		if (str[strlen] >= 97 && str[strlen] <= 122)
			str[strlen] = str[strlen] - 32;
		strlen++;
	}
	return (str);
}
