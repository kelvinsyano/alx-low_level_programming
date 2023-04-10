#include "main.h"

/**
 * print_binary - prints the binary rep of a  no
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int number;
	int i, incr = 0;

	for (i = 63; i >= 0; i--)
	{
		number = n >> i;
		if (number & 1)
		{
			_putchar('1');
			incr++;
		}
		else if (incr)
			_putchar('0');
	}
	if (!incr)
		_putchar('0');

}
