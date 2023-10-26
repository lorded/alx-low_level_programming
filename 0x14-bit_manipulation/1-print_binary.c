#include "main.h"

/**
 * print_binary - shows the binary representation of a decimal number
 * @n: the decimal number to be displayed in binary
 */
void print_binary(unsigned long int n)
{
	int x, bit_count = 0;
	unsigned long int current_bit;

	for (x = 63; x >= 0; x--)
	{
		current_bit = n >> x;

		if (current_bit & 1)
		{
			_putchar('1');
			bit_count++;
		}
		else if (bit_count)
			_putchar('0');
	}
	if (!bit_count)
		_putchar('0');
}

