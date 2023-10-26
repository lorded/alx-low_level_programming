#include "main.h"

/**
 * get_bit - retrieves the value of a specific bit at an index in a decimal number
 * @n: the number where the bit is searched
 * @index: index of the bit to be gotten
 *
 * Return: value of the specific bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int valueofbit;

	if (index > 63)
		return (-1);

	valueofbit = (n >> index) & 1;

	return (valueofbit);
}

