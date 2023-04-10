#include "main.h"

/**
 * read_textfile - reads text to file
 * @filename: file
 * @letters: numbers
 *
 * Return: returns numbers or 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int folder;
	ssize_t nrd, nwr;
	char *buffer;

	if (!filename)
		return (0);

	folder = open(filename, O_RDONLY);

	if (folder == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	nrd = read(folder, buffer, letters);
	nwr = write(STDOUT_FILENO, buffer, nrd);

	close(folder);

	free(buffer);

	return (nwr);
}
