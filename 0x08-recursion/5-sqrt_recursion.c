#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - squareroot function
 *
 * @n: pareameter
 *
 * Return: return sqrt
 */

int _sqrt_recursion(int n)
{
	float root;
	int root1;
	
	root = (n / _sqrt_recursion(n));
	root1 = root;
	if (root != root1)
		return (-1);
	return (root);
}
