#include <stdio.h>
#include "main.h"
/**
 * print_most_numbers - prints alphabet in lowercase then uppercase
 * Return: 0 always (success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i != 2 && i != 4)
			printf("%d", i);
	}

	putchar('\n');
}
