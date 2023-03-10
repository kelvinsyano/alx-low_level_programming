#include "main.h"

/**
 * _strlen - function length of string
 *
 * @s: parameter
 *
 * Return: returns length
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
