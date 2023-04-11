#include "main.h"
#include <string.h>

/**
 * append_text_to_file - Append text at the end of a file
 *
 * @filename: Path to the file
 * @text_content: New text to append to the file
 *
 * Return: 1 on SUCCESS, otherwise -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, count;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	len = (text_content != NULL) ? strlen(text_content) : 0;

	count = write(fd, text_content, len);
	if (count == -1 || count != len)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
