#include <stdio.h>
#include "main.h"
/**
 * print_numbers : printing all number
 * return : void
 */

void print_numbers()
{
	char numbers = '0';
	while (numbers <= '9')
	{
		_putchar(numbers);
		numbers++;
	}
}
