#include <stdio.h>
#include "main.h"

/**
 * more_numbers : printing from 0 to 14
 * return : void
 */

void more_numbers()
{
	int N = 10, i = 0;

	while (N--)
	{
		char c = '0';
		char se = '0';
		for (i = 0; i < 15; i++)
		{
			_putchar(c);
			if (i >= 9)
			{
				c = '1';
				if (i == 9)
				{
					continue;
				}
				_putchar(se++);
				continue;
			}
			c++;
		}
		putchar('\n');
	}
}
