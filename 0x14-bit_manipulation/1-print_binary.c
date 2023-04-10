#include "main.h"

/**
 * print_binary - prints the binary rep of a  no
 * @n: the number to be printed
 */
void print_binary(unsigned long int n)
{
	unsigned long int number;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	number = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (number > 0)
	{
		if ((n & number) == 0)
			_putchar('0');
		else
			_putchar('1');
		number >>= 1;
	}
}
