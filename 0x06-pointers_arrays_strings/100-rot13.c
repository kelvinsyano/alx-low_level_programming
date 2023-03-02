#include "main.h"

/**
 * rot13 - function
 *
 * @s: parameter
 *
 * Return: returns s
 */

char *rot13(char *s)
{
	char *ptr = s;

	while (*ptr)
	{
		if ((*ptr >= 'a' && *ptr <= 'm') || (*ptr >= 'A' && *ptr <= 'M'))
			*ptr += 13;
		else if ((*ptr >= 'n' && *ptr <= 'z') || (*ptr >= 'N' && *ptr <= 'Z'))
			*ptr -= 13;
		ptr++;
	}
	return (s);
}
