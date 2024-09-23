#include <stdio.h>
#include <fcntl.h>
#include <stddef.h>
#include <unistd.h>
#include <stdlib.h>
#define BUFFER_SIZE 1024

/* Function prototypes */
void check_args(int argc);
int open_file_from(char *file_from);
int open_file_to(char *file_to);
void copy_file(int from_fd, int to_fd, char *file_from, char *file_to);
void close_file(int fd);

/**
 * main - Entry point that copies content from one file to another.
 * @argc: Number of command line arguments.
 * @argv: Array of command line arguments.
 *
 * Return: 0 on success, otherwise an error code.
 */
int main(int argc, char *argv[])
{
	int from_fd, to_fd;

	check_args(argc);
	from_fd = open_file_from(argv[1]);
	to_fd = open_file_to(argv[2]);
	copy_file(from_fd, to_fd, argv[1], argv[2]);
	close_file(from_fd);
	close_file(to_fd);

	return (0);
}

/**
 * check_args - Verifies the number of command line arguments.
 * @argc: Number of command line arguments.
 */
void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_file_from - Opens the source file for reading.
 * @file_from: Name of the file to read from.
 *
 * Return: The file descriptor on success, -1 on failure.
 */
int open_file_from(char *file_from)
{
	int fd = open(file_from, O_RDONLY);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	return (fd);
}

/**
 * open_file_to - Opens or creates the destination file for writing.
 * @file_to: Name of the file to write to.
 *
 * Return: The file descriptor on success, -1 on failure.
 */
int open_file_to(char *file_to)
{
	int fd = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}

	return (fd);
}

/**
 * copy_file - Copies the content from one file to another.
 * @from_fd: File descriptor of the source file.
 * @to_fd: File descriptor of the destination file.
 * @file_from: Name of the source file.
 * @file_to: Name of the destination file.
 */
void copy_file(int from_fd, int to_fd, char *file_from, char *file_to)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(from_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(to_fd, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			close(from_fd);
			close(to_fd);
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		close(from_fd);
		close(to_fd);
		exit(98);
	}
}

/**
 * close_file - Closes the file descriptor.
 * @fd: The file descriptor to close.
 */
void close_file(int fd)
{
	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
