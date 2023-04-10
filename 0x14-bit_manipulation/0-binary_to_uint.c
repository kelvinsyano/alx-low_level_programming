#include "main.h"
/**
 * binary_to_uint - binary to int
 *
 * @b: binary number
 *
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int unit = 0;
	int length;

	if (b == NULL)
	{
		return (0);
	}
	unit = 0;
	for (length = 0; b[length] != '\0'; length++)
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		unit = unit << 1;
		if (b[length] == '1')
			unit = unit | 1;
	}
	return (unit);
}

