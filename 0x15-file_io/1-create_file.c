#include "main.h"

/**
 * create_file - creates a file
 * @file_name: filename.
 * @text_content: content writed in the file.
 *
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *file_name, char *text_content)
{
	int fd;
	int n_letters;
	int rwr;

	if (!file_name)
		return (-1);

	fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (n_letters = 0; text_content[n_letters]; n_letters++)
		;

	rwr = write(fd, text_content, n_letters);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
