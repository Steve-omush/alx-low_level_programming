#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: pointer to name of file.
 * @text_content: NULL terminated string.
 *
 * Return: 1 on success, -1 failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len, bytes_written;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
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

	if (chmod(filename, 0664) == -1)
		return (-1);

	return (1);
}
