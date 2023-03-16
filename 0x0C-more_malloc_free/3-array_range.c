#include "main.h"
#include <stdlib.h>

/**
 * array_range - range fubction
 *
 * @min: minimum value
 *
 * @max: max value
 *
 * Return: returns arr
 */

int *array_range(int min, int max)
{
	int size = max - min + 1;
	int *arr;
	int i;

	if (min > max)
		return (NULL);
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		arr[i] = min + 1;
	}
	return (arr);
}
