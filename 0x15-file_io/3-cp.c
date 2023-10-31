#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

#define BUFFER_SIZE 1024

void error_exit(int code, const char *message);

/**
 * error_exit - print error messages and exit program.
 * @code: error code.
 * @message: error message.
 *
 * Return: Nothing.
 */
void error_exit(int code, const char *message)
{
	dprintf(2, "Error: %s\n", message);
	exit(code);
}

/**
 * main - main function.
 * @ac: code.
 * @av: character double pointer.
 *
 * Return: O.
 */
int main(int ac, char **av)
{
	int fd_from, fd_to;
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}

	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		error_exit(98, "Can't read from file");

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		error_exit(99, "Can't write to file");

	while ((bytes_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(fd_to, buffer, bytes_read);
		if (bytes_written != bytes_read)
			error_exit(99, "Can't write to file");
	}

	if (bytes_read == -1)
		error_exit(98, "Can't read from file");

	if (close(fd_from) == -1)
		error_exit(100, "Can't close fd");

	if (close(fd_to) == -1)
		error_exit(100, "Can't close fd");

	return (0);
}
