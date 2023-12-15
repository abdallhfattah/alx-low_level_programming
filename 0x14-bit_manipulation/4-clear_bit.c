#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @num_ptr: pointer to the number to change
 * @idx: index
 * Return: 1
 */
int clear_bit(unsigned long int *num_ptr, unsigned int idx)
{
	if (idx > 63)
		return (-1);

	*num_ptr = (~(1UL << idx) & *num_ptr);
	return (1);
}
