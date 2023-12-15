#include "main.h"

/**
 * set_bit - sets a bit at a given index to 1
 * @num_ptr: change
 * @idx: index
 *
 * Return: 1
 */
int set_bit(unsigned long int *num_ptr, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*num_ptr = ((1UL << idx) | *num_ptr);
	return (1);
}

