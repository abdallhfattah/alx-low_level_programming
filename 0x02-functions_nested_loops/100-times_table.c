#include "main.h"
#include <unistd.h>
#include <stdio.h>

/**
 * print_times_table - printing table of size n + 1
 * n : size of the matrix
 * Return: no Return value.
 *
 */
void print_times_table(int n)
{
	int i, j, z;
	if (n >= 0 && n <= 15)
	{

		for (i = 0; i <= n; i++)
		{
			z = 0;
			for (j = 0; j <= n; j++)
			{
				if (j != n)
				{
					if (z + i >= 10 && z + i < 100)
					{
						printf("%d,  ", z);
					}
					else if (z + i >= 100 && z + i < 1000)
					{
						printf("%d, ", z);
					}
					else if (z + i < 10)
					{
						printf("%d,   ", z);
					}
					else
					{
						printf("%d", z);
					}
				}
				else
				{
					printf("%d", z);
				}
				z += i;
			}
			printf("\n");
		}
	}
}