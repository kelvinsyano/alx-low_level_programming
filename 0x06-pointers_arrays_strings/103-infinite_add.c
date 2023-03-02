#include <string.h>
#include "main.h"

/**
 * infinite_add - add
 *
 * @n1: parametere
 *
 * @n2: number 2
 *
 * @r: parameter 4
 *
 * @size_r: size parameter
 *
 * Return: return something
 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int carry = 0, sum = 0, len1 = strlen(n1), len2 = strlen(n2);
	int i = len1 - 1, j = len2 - 1, k = size_r - 1;

	r[k--] = '\0';

	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry + (i >= 0 ? n1[i--] - '0' : 0) + (j >= 0 ? n2[j--] - '0' : 0);
		if (k < 0)
		{
			return (0);
		}
		r[k--] = sum % 10 + '0';
		carry = sum / 10;
	}
	return (r + k + 1);
}
