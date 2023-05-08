#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * read_textfile - Reads text file
 * @filename: file to be read
 * @letters: sum of letters to be read
 *
 * Return: sum of bytes read or 0 if failed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t sum = 0;
	char *buffer;
	ssize_t desc;
	ssize_t re;

	if (filename == NULL)
		return (0);

	desc = open(filename, O_RDONLY);
	if (desc == -1)
		return (0);

	buffer = malloc(letters * sizeof(char));
	if (buffer == NULL)
	{
		close(desc);
		return (0);
	}

	re = read(desc, buffer, letters);
	if (re == -1)
	{
		free(buffer);
		close(desc);
		return (0);
	}

	sum = write(STDOUT_FILENO, buffer, re);
	if (sum == -1 || sum != re)
	{
		free(buffer);
		close(desc);
		return (0);
	}

	free(buffer);
	close(desc);
	return (sum);
}
