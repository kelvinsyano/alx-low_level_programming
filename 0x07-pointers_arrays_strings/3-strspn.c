#include "main.h"
/**
 * _strspn - function to count no of chars
 *
 * @s: parameter
 *
 * @accept: parameter
 *
 * Return: return the number of characters
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (!accept[j])
			break;
	}
	return (i);
}
