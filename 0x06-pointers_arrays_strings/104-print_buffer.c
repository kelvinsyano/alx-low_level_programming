#include <stdio.h>
#include <ctype.h>
#include "main.h"

/**
 * print_buffer - print buffer of 10
 *
 * @b: parameter
 *
 * @size: parameter
 * Return: no return
 */

void print_buffer(char *b, int size)
{
	int i, j;

	if (size <= 0)
	{
		printf("\n");
		return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);
		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
			{
				printf("%02x", *(unsigned char *)(b + i + j));
			}
			else
			{
				printf(" ");
			}
			if (j % 2 == 1)
			{
				printf(" ");
			}
		}
		for (j = 0; j < 10 && i + j < size; j++)
		{
			char c = *(b + i + j);

			printf("%c", isprint(c) ? c : '.');

		}
		printf("\n");
	}
}

