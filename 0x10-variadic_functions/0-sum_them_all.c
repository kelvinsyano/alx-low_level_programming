#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - function for sum
 * @n: parameter
 * Return: returns sum if n not equal 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, sum;

	va_start(ap, n);

	sum = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < (int)n; i++)
	{
		sum += va_arg(ap, int);
	}
	return (sum);
	va_end(ap);
}
