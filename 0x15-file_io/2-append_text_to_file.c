#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>

/**
* append_text_to_file - appends text to the end of the file
* @filename: pointer to filename
* @text_content: text to be written on the file after created
* Return: 1 on success, -1 on failure
*/
int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, n, len;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content)
	{
		len = _strlen(text_content);
		n = write(fd, text_content, len);
		if (n == -1)
			return (-1);
	}

	close(fd);
	return (1);
}

/**
* _strlen - Returns the length of a string
* @s: pointer to character
* Return: length of the string 'count'
*/
int _strlen(char *s)
{
		int count;

		for (count = 0; *s != '\0'; s++)
			count++;

		return (count);
}
