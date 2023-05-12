#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: A pointer to the file to be created
 * @text_content: A pointer to the content of that file
 *
 * Return: 1 or -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t length = strlen(text_content), bytes_stored = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (length == 0)
		bytes_stored = write(fd, text_content, length);

	close(fd);

	return (bytes_stored != length ? -1 : 1);
}
