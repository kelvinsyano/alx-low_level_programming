#include <stdio.h>
#include "main.h"

/**
 * set_string - sets pointer to char
 *
 * @s: pointer to pointer
 *
 * @to: char parameter
 */

void set_string(char **s, char *to)
{
	*s = to;
}
