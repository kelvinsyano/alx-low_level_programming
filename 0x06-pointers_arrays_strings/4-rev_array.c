#include "main.h"

/**
 * reverse_array - reversing an array
 *
 * @a: parameter 1
 *
 * @n: parameter 2
 */

void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
