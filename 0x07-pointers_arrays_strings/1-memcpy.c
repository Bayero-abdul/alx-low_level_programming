#include "main.h"

/**
* _memcpy - copies memory area
* @dest: pointer to the memory area copied to
* @src: pointer to the memory area where it is copied from
* @n: number of bytes to be copied
* Return: pointer to the memory area copied to
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest)
}
