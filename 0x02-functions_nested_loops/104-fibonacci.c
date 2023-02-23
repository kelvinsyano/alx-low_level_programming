#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * Return: always 0
 *
 */

int main(void)
{
	unsigned int i, a = 1, b = 2, c;

	printf("%u, %u", a, b);
	for (i = 2; i < 98; i++)
	{
		c = a + b;
		printf(", %u", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
