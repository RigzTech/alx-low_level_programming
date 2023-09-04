#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @file_name: filename.
 * @l: numbers of letters printed.
 *
 * Return: numbers of letters printed. It fails, returns 0.
 */
ssize_t read_textfile(const char *file_name, size_t l)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!file_name)
		return (0);

	fd = open(file_name, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (l));
	if (!buf)
		return (0);

	nrd = read(fd, buf, l);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
