#include "main.h"

/**
 * create_file - creating file
 * @filename: file.
 * @text_content: content of the file.
 *
 * Return: returns 1 if it success else -1
 */
int create_file(const char *filename, char *text_content)
{
	int folder;
	int no_of_letters;
	int rwr;

	if (!filename)
		return (-1);

	folder = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (folder == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (no_of_letters = 0; text_content[no_of_letters]; no_of_letters++)
		;

	rwr = write(folder, text_content, no_of_letters);

	if (rwr == -1)
		return (-1);

	close(folder);

	return (1);
}
