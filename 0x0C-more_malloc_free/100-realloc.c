#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* _realloc - Reallocates memory block
* @ptr: a pointer to the memory previously allocated
* @old_size: is the size, in bytes, of the allocated space for ptr
* @new_size: is the new size, in bytes of the new memory block
* Return:  a pointer to the memory newly allocated
*/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int *p, *ip;
	unsigned int i;

	if (ptr == NULL)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
		return (p);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			free(ptr);
			return (NULL);
		}
	}

	ip = ptr;
	for (i = 0; i < old_size; i++)
	{
		p[i] = ip[i];
	}
	free(ptr);
	return (p);
}
