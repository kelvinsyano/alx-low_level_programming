#include "main.h"
#include <stdio.h>
/**
 * main - main functiob
 *
 * Return: always 0
 */

int main(void)
{
	long int a = 1, b = 2, c;
	int i;

	printf("%ld, %ld", a, b);
	for (i = 3; i <= 50; i++)
	{
		c = a + b;
		printf(", %ld", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
