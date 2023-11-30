#include <stdio.h>
#include "main.h"
/**
 * more_numbers - prints alphabet in lowercase then uppercase
 * Return: 0 always (success)
 */
void more_numbers(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 15; i++)
		{
			printf("%d", i);
		}

		putchar('\n');
	}
}
