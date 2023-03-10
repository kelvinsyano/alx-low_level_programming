#include "main.h"

/**
 * _strchr - function to search for a character
 *
 * @s: parameter to be searched through
 *
 * @c: character searched
 *
 * Return: return S if found, null if not
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
		return (s);
	return (0);
}
