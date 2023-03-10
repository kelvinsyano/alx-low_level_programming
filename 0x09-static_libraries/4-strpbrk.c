#include "main.h"

/**
 * _strpbrk - functions to count char
 *
 * @s: parameter
 *
 * @accept: parameter
 * Return: returns number of char if not 0
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		char *a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (0);
}
