#include "main.h"

/**
 * print_sign -function to print sign
 *
 * @n: parameter for the function
 *
 * Return: returns 1 if addition, 0 if 0, -1 if substraction
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
