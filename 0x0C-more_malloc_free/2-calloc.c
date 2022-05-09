#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
* _calloc - allocates memory for an array, using malloc
* @nmemb: number of elements
* @size: size of elements
* Return: pointer to the allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb  == 0 || size == 0)
		return (NULL);

	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);

	return (p);
}
