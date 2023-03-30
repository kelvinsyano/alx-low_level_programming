#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of char
 * @size: size of array
 * @c: str to print
 *
 * Return: returns arry
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	arr = malloc(size * sizeof(char));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}

