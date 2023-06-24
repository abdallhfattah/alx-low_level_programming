#include <stdio.h>
#include "main.h"

/**
 * print_diagonal : printing '\' N times if N > 0
 * return : void
 */

void print_diagonal(int n)
{
	int i = 0;
	for (i = 0; i < n; i++)
	{
		int j = 0;
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}