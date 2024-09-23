#include "main.h"
#include <fcntl.h>
#include <string.h>

/**
 * create_file - Creates a file and writes a string to it.
 * @filename: The name of the file to create.
 * @text_content: A NULL-terminated string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
int fd, len;
ssize_t bytes_written;
if (filename == NULL)
	return (-1);
if (text_content == NULL)
	text_content = "";
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
	return (-1);

len = strlen(text_content);
bytes_written = write(fd, text_content, len);
if (bytes_written == -1 || bytes_written != len)
return (-1);

return (1);
}
