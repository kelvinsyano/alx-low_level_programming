#include <stdio.h>

/**
 * main - main function
 * @argc: argment to main
 * @argv: array to pointer
 * Return: returns 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);
	return (0);
}
