#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @num: number to print in binary
 */
void print_binary(unsigned long int num)
{
	int idx;
	int sum = 0;
	unsigned long int current;

	for (idx = 63; idx >= 0; idx--)
	{
		current = num >> idx;

		if (current & 1)
		{
			_putchar('1');
			sum++;
		}
		else if (sum)
			_putchar('0');
	}
	if (!sum)
		_putchar('0');
}

