#include "main.h"

/**
 * _strcmp - functiion to compare strings
 *
 * @s1: parameter 1
 *
 * @s2: parameter 2
 *
 * Return: returns diff of 2 strngs
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
		{
			return (0);
		}
		i++;
	}
	return (s1[i] - s2[i]);
}
