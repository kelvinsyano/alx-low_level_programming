#include "main.h"
/**
 * _strlen - function for lenght
 *
 * @s: parameter
 *
 * Return: returns length
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;
	return (len);
}

/**
 * puts_half - function for half printing
 *
 * @str: parameter
 */

void puts_half(char *str)
{
	int len = _strlen(str);
	int i, n;

	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len - 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
