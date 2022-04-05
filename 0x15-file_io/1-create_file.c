#include "main.h"

/**
 * create_file - Create a function that creates a file.
 * @filename: Is the name of the file to create
 * @text_content: Is a NULL terminated string to write to the file.
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, written = 0, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_CREAT, 00600);
		close(fd);
		return (1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 00600);
	while (text_content[length])
		length++;

	written = write(fd, text_content, length);

	if (written < 0 || fd < 0)
		return (-1);

	close(fd);
	return (1);
}
