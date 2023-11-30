#include "main.h"
/**
 * cap_string - capitalizes all words of a string
 * @str: string
 * Return: array of char
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))
			i++;
		if (str[i] == ',' || str[i] == ';' || str[i] == '.'
				|| str[i] == '!' || str[i] == '?'
				|| str[i] == '\"' || str[i] == '('
				|| str[i] == ')' || str[i] == '{'
				|| str[i] == '}' || i == 0)
		{
			str[i + 1] -= 32;
		}
		i++;
	}
	return (str);
}
