#include <stdio.h>
#include "main.h"

/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	long num = 612852475143;
	int large = 0;
	int i;

	for (i = 2; i * i <= num; i++)
	{
		while (num % i == 0)
		{
			large = i;
			num /= i;
		}
	}
	if (num > 1)
	{
		large = num;
	}
	printf("%d\n", large);
	return (0);
}
