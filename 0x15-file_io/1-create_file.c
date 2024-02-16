#include "main.h"

/**
 * create_file -  creates a file
 * @filename: pointer to the name of the file
 * @text_content: string to be saved in the file
 * Return: 1 on success -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	int fd, no_char, is_closed;

	if (text_content == NULL)
	{
		/*write(2, "empty text\n", 11);*/
		return (-1);
	}

	if (filename == NULL)
	{
		/*write(2, "file name not provided\n", 23);*/
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		/*write(2, "can not open file\n", 18);*/
		return (-1);
	}

	no_char = write(fd, text_content, strlen(text_content));
	if (no_char < 0)
	{
		return (-1);
	}
	is_closed = close(fd);

	if (is_closed == -1)
		return (-1);
	return (1);
}
