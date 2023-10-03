#include "main.h"

/**
 * create_file - function to create a file
 * @filename: name of file to create
 * @text_content: NULL terminated string to write to file
 *
 * Return: 1 on success and -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, w, len;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len] != '\0')
			len++;
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	w = write(fd, text_content, len);

	if (w == -1)
		return (-1);
	close(fd);
	return (1);
}
