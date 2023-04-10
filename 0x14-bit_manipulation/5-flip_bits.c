#include "main.h"

/**
 * flip_bits - counts the number of bits
 * @n: first parameter
 * @m: second parameter
 *
 * Return: bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int increment = 0;
	int i;

	unsigned long int number;
	unsigned long int exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		number = exclusive >> i;
		if (number & 1)
			increment++;
	}
	return (increment);
}

