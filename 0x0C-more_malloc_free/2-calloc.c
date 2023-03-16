#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function
 *
 * @nmemb: parameter
 *
 * @size: second
 *
 * Return: returns pointer value
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	memset(ptr, 0, nmemb * size);
	return (ptr);
}
