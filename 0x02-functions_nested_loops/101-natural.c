#include "main.h"
#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int sum = 0;
	int i;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			sum = sum + i;
	}
	printf("sum: %d\n", sum);
	return (0);
}

