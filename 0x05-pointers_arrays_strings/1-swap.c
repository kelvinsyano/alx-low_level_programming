#include "main.h"

/**
 * swap_int - swapping in points
 *
 * @a: pointer parameter
 *
 * @b: pointer parameter 1
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
