#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - create array of integers
* contain all the values from min to max, ordered from min to max
* @min: number
* @max: number
* Return: pointer to the newly created array
*/
int *array_range(int min, int max)
{
	int *p;
	int i;

	if (min > max)
		return (NULL);

	p = malloc(sizeof(*p) * (max - min + 1));
	if (p == NULL)
		return (NULL);

	for (i = min; i <= max; i++)
		p[i] = i;

	return (p);
}
