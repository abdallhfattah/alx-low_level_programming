#include <stdio.h>
/**
 * _isupper : check whether a character is upper case or lower case
 * @c : character to check
 * return : 1 if upper , 0 if false
 */

int _isupper(char c)
{
	if (c >= 65 && c <= 90)
		return 1;
	else
		return 0;
}