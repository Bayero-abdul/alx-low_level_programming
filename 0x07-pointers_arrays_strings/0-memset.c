#include "main.h"

/**
* _memset -  fills memory with a constant byte
* @s: pointer to the memory area
* @b: character to fill
* @n: first 'n' byte to fill
* Return: pointer to the memory area
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	for (; i < n; i++)
	{
		s[i] = '\0';
	}
	return (s);
}
