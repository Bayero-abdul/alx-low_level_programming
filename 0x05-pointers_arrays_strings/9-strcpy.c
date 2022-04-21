#include "main.h"

/**
* _strcpy - copies string
* @dest: destination the string is copied to
* @src: where the string is copied from
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (*src)
	{
		if (*src == 0)
			break;

		*(dest + i) = *src++;

		if (*src == '\0')
			break;
		i++;
	}

	return (dest);
}
