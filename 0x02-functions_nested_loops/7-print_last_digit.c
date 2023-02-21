#include "main.h"

/**
 * print_last_digit - last digit printing function
 *
 * @m: function parameter
 *
 * Return: returns k the last digit of a number
 */

int print_last_digit(int m)
{
	int k;

	k = m % 10;
	if (m < 0)
		k = -k;
	else if (m > 0)
		k = k;
	_putchar(k + '0');
	return (k);
}
