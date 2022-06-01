#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
* read_textfile - reads a text file and prints it to the POSIX
* standard output
* @filename: pointer to filename
* @letters: number of letters it should read and print
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, m;
	char *buf;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(*buf) * letters);
	if (buf == NULL)
		return (0);

	n = read(fd, buf, letters);
	m = write(STDOUT_FILENO, buf, n);
	if (n == -1 || n != m)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (m);
}
