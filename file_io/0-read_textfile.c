#include "main.h"

/**
 * read_textfile - Read a texfile and print its content to stdout
 *
 * @filename: Path to the file
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int fd, bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);
	return (bytes_read);
}
