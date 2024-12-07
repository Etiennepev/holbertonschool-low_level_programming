#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: Pointer to the name of the file to read.
 * @letters: Number of letters to read and print.
 * Return: Actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytesread, byteswrite;


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
	bytesread = read(fd, buffer, letters);
	if (bytesread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	byteswrite = write(1, buffer, bytesread);
	if (byteswrite == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);
	free(buffer);
	return (bytesread);
}
