#include <stdio.h>
#include "main.h"

/**
 * print_line : printing '_' N times if N > 0
 * return : void
 */

void print_line(int N)
{
	int i = 0;
	for (i = 0; i < N; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}