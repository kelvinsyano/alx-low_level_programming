#include "main.h"

/**
 * _islower - function for checking lowercase alpha
 *
 * @c: parameter to the lower case
 *
 * Return: returns 1 if lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
