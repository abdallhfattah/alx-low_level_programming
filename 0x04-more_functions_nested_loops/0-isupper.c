#include "main.h"
#include <stdio.h>

/**
 * _isupper - check if character Upper or not
 * @c : character to check
 * return : 1 if upper , 0 if false
 */

int _isupper(char c)
{
	if (c >= 65 && c <= 90)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}