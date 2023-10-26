#include "main.h"

/**
 * clear_bit - changes the value of a specific bit to 0
 * @n: pointer to the number to be modified
 * @index: index of the bit to cleared
 *
 * Return: 1 if operation is successful, -1 if its unsuccessful
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n &= ~(1UL << index);
	return (1);
}

