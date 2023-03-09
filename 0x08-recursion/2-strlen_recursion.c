#include "main.h"

/**
 * _strlen_recursion - total number of chars
 *
 * @s: parameter
 *
 * Return: returns total number od chars
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return(0);
	}
	return (1 + _strlen_recursion(s + 1));
}
