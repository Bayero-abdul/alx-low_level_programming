#include "main.h"

/**
* _strncat - concatenates two strings by
* using n bytes from the src(source)
* @dest: string to append to
* @src: string to append
* @n: number of bytes to concatenate
* Return: destination address
*/
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *tmp;

	tmp = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n && (*dest++ = *src++) != '\0'; i++)
		;

	return (tmp);
}
