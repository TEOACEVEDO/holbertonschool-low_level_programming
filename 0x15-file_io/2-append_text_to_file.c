#include "main.h"

/**
 * append_text_to_file - Write a function that
 * appends text at the end of a file.
 * @filename: Is the name of the file
 * @text_content: Is the NULL terminated string
 * to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, written = 0, length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_APPEND | O_WRONLY);

	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
			length++;

		written = write(fd, text_content, length);
		if (written == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
