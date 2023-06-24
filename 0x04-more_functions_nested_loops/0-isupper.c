#include <stdio.h>
/**
 * _isupper : check whether a character is upper case or lower case
 * @c : character to check
 * return : 1 if upper , 0 if false
 */

int _isupper(char c)
{
	return (c >= 65 && c <= 90) ? 1 : 0;
}