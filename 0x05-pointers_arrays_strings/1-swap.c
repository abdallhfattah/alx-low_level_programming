#include "main.h"
/**
 * swap_int - swaps 2 ints
 * @a: parameter
 * @b: 2nd parameter
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
