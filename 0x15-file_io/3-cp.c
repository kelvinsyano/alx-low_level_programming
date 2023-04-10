#include "main.h"
#include <stdio.h>

/**
 * error_file - file opening checker.
 * @file_from: file from
 * @file_to: file to.
 * @argv: argument
 * Return: always 0
 */
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - check the code
 * @argc: arguments number.
 * @argv: arguments.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int file_from, file_to, err_msg;
	ssize_t no_of_chars, nwr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	no_of_chars = 1024;

	while (no_of_chars == 1024)
	{
		no_of_chars = read(file_from, buffer, 1024);
		if (no_of_chars == -1)
			error_file(-1, 0, argv);
		nwr = write(file_to, buffer, no_of_chars);
		if (nwr == -1)
			error_file(0, -1, argv);
	}

	err_msg = close(file_from);
	if (err_msg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}

	err_msg = close(file_to);

	if (err_msg == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	return (0);
}
