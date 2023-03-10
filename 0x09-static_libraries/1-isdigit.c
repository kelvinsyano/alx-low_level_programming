#include "main.h"

/**
 * _isdigit - function to digit
 *
 * @c: function parameter
 *
 * Return: return 1 if digit otherwise 0
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
