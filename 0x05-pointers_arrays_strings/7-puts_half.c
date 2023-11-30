#include "main.h"
#include <stdio.h>
/**
 * puts_half - prints half of a string
 * @str: string to be printed
 */
void puts_half(char *str)
{
	int i = 0;
	int n, j;

	while (str[i] != '\0')
		i++;

	if (i % 2 == 0)
		n = i / 2;
	else
	{
		n = (i - 1) / 2;
		n += 1;
	}
	for (j = n; j < i; j++)
		_putchar(str[j]);
	_putchar('\n');
}
