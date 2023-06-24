#include <stdio.h>
#include "main.h"

/**
 * print_square: printing square of size * size from '#' 
 * @size : size given to print blocks
 * return : void
 */

void print_square(int size)
{
	int i = 0;
	for (i = 0; i < size; i++)
	{
		int j = 0;
		for (j = 0; j < size; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
