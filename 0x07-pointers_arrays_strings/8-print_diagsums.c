#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - printing sum of diagnols
 *
 * @a: parameter of an rray
 *
 * @size: size of an array
 */

void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, i;

	for (i = 0; i < size; i++)
	{
		sum1 = sum1 + a[i * size + i];
		sum2 = sum2 + a[(i + 1) * size - i - 1];
	}
	printf("%d, %d\n", sum1, sum2);
}
