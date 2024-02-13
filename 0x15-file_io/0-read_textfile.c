#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX
 * standard output.
 * @filename: pointer to text file to read from
 * @letters: number of character to read
 * Return: actual number of letters it could read and print. 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		close(file);
		return (0);
	}

	bytes_read = read(file, buffer, letters);

	if (bytes_read <= 0)
	{
		close(file);
		free(buffer);
		return (0);
	}

	close(file);

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	return (bytes_written);
}
