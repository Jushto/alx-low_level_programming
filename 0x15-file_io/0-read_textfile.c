#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file and print it to POSIX standard output
 * @filename: name of file
 * @letters: no. of letters to read and print
 *
 * Return: no. of letters it could read and print, 0 otherwise
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, bytes, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	bytes = read(fd, buf, letters);

	w = write(STDOUT_FILENO, buf, bytes);
	if (w != bytes)
		return (0);
	free(buf);
	close(fd);
	return (w);
}
