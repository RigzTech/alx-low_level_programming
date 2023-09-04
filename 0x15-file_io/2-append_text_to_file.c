#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @file_name: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *file_name, char *text_content)
{
	int fd;
	int n_letters;
	int rwr;

	if (!file_name)
		return (-1);

	fd = open(file_name, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (n_letters = 0; text_content[n_letters]; n_letters++)
			;

		rwr = write(fd, text_content, n_letters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
