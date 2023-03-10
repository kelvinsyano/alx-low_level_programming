#include "main.h"

/**
 * _isalpha - function for checking upper amd lower alpha
 *
 * @c: parameter for the function
 *
 * Return: returns 1 if is char or otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
