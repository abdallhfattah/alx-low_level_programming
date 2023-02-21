#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */
int main(void)
{
	int i, j , n;
	n = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if(n < 1)
				n++;
			else
			{
			n = 0;
			if (i+j < 18)
				putchar (',');
			}
			putchar (' ');
		}
	}

	putchar ('\n');
	return (0);
}
