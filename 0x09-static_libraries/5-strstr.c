#include "main.h"

/**
 * _strstr - function
 *
 * @haystack: parameter
 *
 * @needle: parameter
 *
 * Return: return haystack or else null
 */

char *_strstr(char *haystack, char *needle)
{
	char *p1, *p2, *p3;

	if (!*needle)
		return (haystack);
	while (*haystack)
	{
		p1 = haystack;
		p2 = needle;
		while (*p1 && *p2 && *p1 == *p2)
		{
			p1++;
			p2++;
		}
		if (!*p2)
			return (haystack);
		p3 = haystack;
		p3++;
		haystack = p3;
	}
	return (0);
}
