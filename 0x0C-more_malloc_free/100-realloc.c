#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - function to copy form malloc to free block
 *
 * @ptr: first parameter
 *
 * @old_size: second parameter
 *
 * @new_size: new size
 *
 * Return: returns pointervalue
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size < old_size)
	{
		memcpy(new_ptr, ptr, new_size);
	}
	else
	{
		memcpy(new_ptr, ptr, old_size);
	}
	free(ptr);
	return (new_ptr);
}

