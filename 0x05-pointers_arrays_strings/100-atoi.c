#include "main.h"

/**
 * _atoi - converting string to int
 *
 * @s: function parameter
 *
 * Return: returns result
 */

int _atoi(char *s)
{
	int sign = 1;
	int result = 0;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if (*s == '+')
	{
		s++;
	}
	while (*s != '\0')
	{
		if (*s < '0' || *s > '9')
		{
			break;
		}
		result = result * 10 + (*s - '0');
		s++;
	}
	return (sign * result);
}
