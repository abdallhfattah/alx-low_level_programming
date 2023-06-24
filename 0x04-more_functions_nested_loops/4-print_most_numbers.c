#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers : printing all number unless 2 , 4
 * return : void
 */

void print_most_numbers(void)
{
	char numbers = '0';
	while (numbers <= '9')
	{
		if (numbers == '2' || numbers == '4')
		{
			numbers++;
			continue;
		}
		_putchar(numbers);
		numbers++;
	}
	_putchar('\n');
}
