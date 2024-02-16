#include "main.h"

/**
 * append_text_to_file - append text to a file
 * if file doesn't exists do not creat new one
 * @filename: pointer to the file
 * @text_content: pointer to the text to be appended
 * Return: 1 0n success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, char_written, is_closed;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		if (errno == EACCES)
			return (-1);
		return (-1);
	}

	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	char_written = write(fd, text_content, strlen(text_content));
	if (char_written < 0)
	{
		close(fd);
		return (-1);
	}

	is_closed = close(fd);

	if (is_closed == -1)
		return (-1);

	return (1);
}
