#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @num1: first number
 * @num2: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	int idx;
	int sum	= 0;
	unsigned long int curr;
	unsigned long int exc = num1 ^ num2;

	for (idx = 63; idx >= 0; idx--)
	{
		curr = exc >> idx;
		if (curr & 1)
			sum++;
	}

	return (sum);
}

