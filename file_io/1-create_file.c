#include "main.h"
#include <string.h>

/**
 * create_file - Create a file
 *
 * @filename: Path to the file
 * @text_content: String to write to the file
 *
 * Return: 1 on SUCCESS, otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		close(fd);
		return (-1);
	}

	len = (text_content != NULL) ? strlen(text_content) : 0;

	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1 || bytes_written != len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
