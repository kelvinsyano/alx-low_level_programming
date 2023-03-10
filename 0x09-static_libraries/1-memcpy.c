#include "main.h"

/**
 * _memcpy - function to copy memory to pointer buffer
 *
 * @dest: pointer parameter
 *
 * @src: pointer 2
 *
 * @n: incrementing parameter
 *
 * Return: returns dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n--)
	{
		*dest_ptr++ = *src_ptr++;
	}
	return (dest);
}
