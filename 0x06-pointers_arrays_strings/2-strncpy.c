#include "main.h"

/**
* _strncpy - copies the string by copying
* at most n bytes from the src
* @src: source (where to copy from)
* @dest: destination (where to copy to)
* @n: number of bytes to be copied
* Return: a pointer to the destination
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *tmp = dest;

	i = 0;

	for (i = 0; i < n && (*dest++ = *src++) != '\0'; i++)
		;
	for (; i < n; i++)
	{
		*dest++ = '\0';
	}

	return (tmp);
}
