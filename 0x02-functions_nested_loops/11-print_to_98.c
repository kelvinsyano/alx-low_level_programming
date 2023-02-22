#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function for 98
 *
 * @n: function parameter
 *
 * Return: no return
 */

void print_to_98(int n)
{
	int i = 0;

	if (i >= 0 && i <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
	else if (i < 0)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
	else if (i > 98)
	{
		for (i = n; i > 98; i--)
		{
			printf("%d, ", i);
		}
		_putchar('\n');
	}
	else if (i == 98)
		printf("%d, ", i);
	_putchar('\n');
}

