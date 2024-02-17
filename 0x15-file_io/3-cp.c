#include "main.h"
#include <limits.h>
#define BUFFER_SIZE 1024

void copy_file(int fd_from, int fd_to, char **arg);
/**
 * main - copy a file to another
 * @argc: argument count
 * @argv: array of command argument
 * Return: 0 on success 1 otherwise
 */
int main(int argc, char **argv)
{
	int fd_to, fd_from;
	char **arg = argv;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	if (argv[1] == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	fd_from = open(argv[1], O_RDONLY);

	if (fd_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}


	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	copy_file(fd_from, fd_to, arg);

	if ((close(fd_from)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);
		exit(100);
	}


	if ((close(fd_to)) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
		exit(100);
	}
	return (0);
}

/**
 * copy_file - copy a file to another
 * @fd_from: file discriptor of source file
 * @fd_to: file descriptor of destination file
 * @arg: pointer to list the two file
 * Return: void
 */
void copy_file(int fd_from, int fd_to, char **arg)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written == -1 || bytes_written != bytes_read)
		{
			close(fd_to);
			close(fd_from);
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", arg[2]);
			exit(99);
		}
	}
	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", arg[1]);
		exit(98);
	}
}
