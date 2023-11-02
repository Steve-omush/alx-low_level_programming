#define _POSIX_C_SOURCE 200809L
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

void print_error(const char *message, const char *file_name, int code);
void print_usage(void);

/**
 * print_usage - function to print.
 * Return: Nothing.
 */
void print_usage(void)
{
    dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
}

/**
 * print_error - prints error.
 * @message: message error.
 * @file_name: name of file.
 * @code: error code.
 */
void print_error(const char *message, const char *file_name, int code)
{
    dprintf(STDERR_FILENO, "Error: %s %s\n", message, file_name);
    exit(code);
}

/**
 * main - main function.
 * @argc: argument counter.
 * @argv: argument vector
 *
 * Return: 1..
 */
int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        print_usage();
        exit(97);
    }

    const char *file_from = argv[1];
    const char *file_to = argv[2];

    int fd_from = open(file_from, O_RDONLY);
    if (fd_from == -1)
    {
        print_error("Can't read from file", file_from, 98);
    }

    int fd_to = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
    if (fd_to == -1)
    {
        print_error("Can't write to file", file_to, 99);
    }

    char buffer[1024];
    ssize_t n;

    while ((n = read(fd_from, buffer, sizeof(buffer))) > 0)
    {
        if (write(fd_to, buffer, n) == -1)
	{
            print_error("Can't write to file", file_to, 99);
        }
    }

    if (n == -1)
    {
        print_error("Can't read from file", file_from, 98);
    }

    if (close(fd_from) == -1)
    {
        print_error("Can't close fd", file_from, 100);
    }

    if (close(fd_to) == -1)
    {
        print_error("Can't close fd", file_to, 100);
    }

    return (0);
}

