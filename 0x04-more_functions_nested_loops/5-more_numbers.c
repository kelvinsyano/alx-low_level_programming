#include "main.h"
#include <stdio.h>

/**
 * more_numbers - function for numbers severally
 */

void more_numbers(void)
{
	int i, k;

	for (i = 0; i <= 10; i++)
	{
		for (k = 0; k <= 14; k++)
		{
			printf("%d", k);
		}
		_putchar('\n');
	}
	_putchar('\n');
}
