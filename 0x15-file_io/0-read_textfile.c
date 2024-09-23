#include "main.h"
#include <fcntl.h>
#include <stdlib.h>
/**
 * read_textfile - Reads a text file and prints it to POSIX standard output
 * @filename: The name of the file to read
 * @letters: The number of letters to read and print
 *
 * Return: The actual number of letters read and printed
 *         0 if the file cannot be opened or read, or if the filename is NULL,
 *         or if write fails or does not write the expected amount of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buffer;
ssize_t read_letters, written_letters;

if (filename == NULL)
	return (0);

fd = open(filename, O_RDONLY);
if (fd == -1)
	return (0);

buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
{
	close(fd);
	return (0);
}

read_letters = read(fd, buffer, letters);
if (read_letters == -1)
{
	free(buffer);
	close(fd);
	return (0);
}

written_letters = write(STDOUT_FILENO, buffer, read_letters);
if (written_letters == -1 || written_letters != read_letters)
{
	free(buffer);
	close(fd);
	return (0);
}

free(buffer);
close(fd);
return (written_letters);
}
