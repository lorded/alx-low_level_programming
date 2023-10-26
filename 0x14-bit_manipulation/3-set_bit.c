#include "main.h"

/**
 * set_bit - changes the value of a specific bit at the given index to 1
 * @n: points to the number to be modified
 * @index: index of the bit to set to 1
 *
 * Return: 1 if succesful, -1 if unsuccesful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n |= (1UL << index);
	return (1);
}

