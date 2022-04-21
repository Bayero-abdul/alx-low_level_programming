#include "main.h"
#include <stdio.h>

/**
* _strcpy - copies string
* @dest: destination the string is copied to
* @src: where the string is copied from
* Return: dest
*/
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while ((*dest++ = *src++) != '\0')
		;

	return (temp);
}
