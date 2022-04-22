#include "main.h"

/**
* _strcat - concatenates two strings
* @dest: string to append to
* @src: string to append
* Return: destination address
*/
char *_strcat(char *dest, char *src)
{
	char *tmp;

	tmp = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while ((*dest++ = *src++) != '\0')
		;

	return (tmp);
}
