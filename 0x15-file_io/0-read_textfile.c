#include "main.h"

/**
 *read_textfile - Write a function that reads a text
 *file and prints it to the POSIX standard output.
 *@filename: File to read and print.
 *@letters: Number of letters it should read and print.
 *Return: The actual number of letters it could read and print
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, n, written;
	char *buffer;

	buffer = malloc(letters * sizeof(char));
	fd = open(filename, O_RDONLY);
	n = read(fd, buffer, letters);
	written = write(STDOUT_FILENO, buffer, n);

	if (!filename || fd == -1 || n == -1 || !buffer)
	{
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (written);
}
