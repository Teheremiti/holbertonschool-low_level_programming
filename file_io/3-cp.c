#include "main.h"
#include <stdio.h>

/**
 * cp - Copy the content of a file to another
 *
 * @file_from: File to copy the content of
 * @file_to: File to copy the content into
 *
 * Return: The number of bytes copied on SUCCESS, otherwise -1
 * exit with code 97 if the number of arguments is not the one expected
 * exit with code 98 if file_from does not exist
 * exit with code 99 if write() fails
 * exit with code 100 if the file cannot be closed
 */

size_t cp(char *file_from, char *file_to)
{
	char buffer[2877];
	int fd1, fd2, check, count = 0;

	fd1 = open(file_from, O_RDONLY);
	if (file_from == NULL || fd1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	fd2 = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd1), exit(99);
	}

	check = read(fd1, buffer, 2877);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(fd1), close(fd2), exit(98);
	}
	count += check;

	check = write(fd2, buffer, check);
	if (check == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		close(fd1), close(fd2), exit(99);
	}

	if (close(fd1) == -1 || close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n",
				 (fd1 == -1) ? fd1 : fd2);
		exit(100);
	}

	return (count);
}


/**
 * main - Check the code
 *
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	char *file_from, *file_to;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_from = argv[1], file_to = argv[2];

	cp(file_from, file_to);

	return (0);
}
