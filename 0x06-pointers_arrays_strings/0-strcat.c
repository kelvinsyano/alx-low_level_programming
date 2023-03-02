#include "main.h"

/**
 * _strcat - concatinating strng
 *
 * @dest: parameter 1
 *
 * @src: parameter 2
 *
 * Return: returns dest
 */

char *_strcat(char *dest, char *src)
{
	char *p = dest;

	while (*p != '\0')
		p++;
	while (*src != '\0')
	{
		*p = *src;
		p++;
		src++;
	}
	*p = '\0';
	return (dest);
}

