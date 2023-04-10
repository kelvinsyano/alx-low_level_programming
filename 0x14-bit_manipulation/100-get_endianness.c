#include "main.h"

/**
 * get_endianness - machine check
 * Return: 1 for small 0 big
 */

int get_endianness(void)
{
	unsigned int number = 1;
	char *c = (char *) &number;

	return (*c);
}
