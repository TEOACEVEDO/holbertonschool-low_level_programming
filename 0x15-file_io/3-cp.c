#include "main.h"
/**
 * main - Write a program that copies the content of a file to another file.
 * @argc: arguments count
 * @av: Arguments i.e filenames
 * Return: Always 0
 */

int main(int argc, char *av[])
{
	int ar1, read_1, ar2, write_2;
	char buffer_1[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	ar1 = open(av[1], O_RDONLY);
	if (ar1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	ar2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 00664);

	if (ar2 < 0)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((read_1 = read(ar1, buffer_1, 1024)) > 0)
	{
		write_2 = write(ar2, buffer_1, read_1);
		if (write_2 < 0)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (read_1 < 0)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);
	else if (close(ar1) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ar1), exit(100);
	else if (close(ar2) < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ar2), exit(100);
	return (0);
}
