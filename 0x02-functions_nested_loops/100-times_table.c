#include <stdio.h>
#include "main.h"

/**
 * print_times_table - print tabkle function
 *
 * @n: function parameter
 *
 * Return:
 * returns nothing
 */

void print_times_table(int n)
{
	int j, i;

	if (n < 0 || n > 15)
		return;
	for (j = 0; j <= n; j++)
	{
		for (i = 0; i <= n; i++)
		{
			printf("%d", j * i);
			if (i < n)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
