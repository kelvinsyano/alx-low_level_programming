#include "main.h"

/**
 * rev_string - function to reverse string
 *
 * @s: parameter
 * Return: no return
 */
void rev_string(char *s)
{
	int len = 0;
	char *start = s, *end = s, tmp;

	while (*end)
	{
		end++;
		len++;
	}
	end--;
	while (start < end)
	{
		tmp = *start;
		*start++ = *end;
		*end-- = tmp;
	}
}
