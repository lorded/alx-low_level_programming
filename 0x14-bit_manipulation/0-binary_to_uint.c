#include "main.h"

/**
 * binary_to_uint - converts a binary value given to unsigned int
 * @b: string that contains the binary number
 *
 * Return: gives the converted value
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int converted_value = 0;

	if (!b)
		return (0);

	for (x = 0; b[x]; x++)
	{
		if (b[x] < '0' || b[x] > '1')
			return (0);
		converted_value = 2 * converted_value + (b[x] - '0');
	}

	return (converted_value);
}

