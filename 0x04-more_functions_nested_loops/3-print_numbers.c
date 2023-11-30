#include <stdio.h>
#include "main.h"
/**
 * print_numbers - prints alphabet in lowercase then uppercase
 * Return: 0 always (success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}

	putchar('\n');
}
