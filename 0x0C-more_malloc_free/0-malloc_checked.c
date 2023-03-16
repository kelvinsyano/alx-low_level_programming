#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - malloc function
 *
 * @b: argument
 *
 * Return: returns pointe vale
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
