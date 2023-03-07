#include "main.h"

/**
 * _memset - function for memory setting
 *
 * @s: parameter 1
 *
 * @b: parameter 2
 *
 * @n: parameter 3
 *
 * Return: returns s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
