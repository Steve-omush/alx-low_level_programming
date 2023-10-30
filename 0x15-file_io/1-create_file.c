#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: integer pointer to file.
 * @text_content: NULL terminated string.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len] != '\0'; len++)
			;

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
