#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include "main.h"

/**
 * create_file - Reads a text file and prints it to POSIX standard output.
 * @filename: Pointer to the name of the file to read.
 * @text_content: Number of letters to read and print.
 * Return: Actual number of letters read and printed, or 0 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t byteswrite = 0;


	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}

	byteswrite = write(fd, text_content, strlen(text_content));
	if (byteswrite == -1)
	{
		close(fd);
		return (-1);
	}
	if (close(fd) == -1)
		return (-1);

	return (1);
}
