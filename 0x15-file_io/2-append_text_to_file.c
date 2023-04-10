#include "main.h"

/**
 * append_text_to_file - appends text to a file
 * @filename: file
 * @text_content: content
 *
 * Return: returns 1 if file exists else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int folder;
	int no_of_letters;
	int rwr;

	if (!filename)
		return (-1);

	folder = open(filename, O_WRONLY | O_APPEND);

	if (folder == -1)
		return (-1);

	if (text_content)
	{
		for (no_of_letters = 0; text_content[no_of_letters]; no_of_letters++)
			;

		rwr = write(folder, text_content, no_of_letters);

		if (rwr == -1)
			return (-1);
	}

	close(folder);

	return (1);
}
