#include <stdio.h>
/**
 * _isdigit : check whether a character is number or not 
 * @c : character to check
 * return : 1 if upper , 0 if false
 */

int _isdigit(char c)
{
	return (c >='0' && c <= '9') ? 1 : 0;
}