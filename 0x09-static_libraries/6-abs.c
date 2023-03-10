#include "main.h"

/**
 * _abs - absolute number funcstion
 *
 * @n: function parameter
 *
 * Return: returns n as absolute value
 */
int _abs(int n)
{
	if (n < 0)
		n = -n;
	else if (n >= 0)
		n = n;
	return (n);
}
