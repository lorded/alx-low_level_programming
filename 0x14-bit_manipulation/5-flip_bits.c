#include "main.h"

/**
 * flip_bits - calculates the number of bits to change
 * to transform one number to another
 * @n: 1st number
 * @m: 2nd number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, count = 0;
	unsigned long int current_bit;
	unsigned long int bit_difference = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		current_bit = bit_difference >> x;
		if (current_bit & 1)
			count++;
	}

	return (count);
}

