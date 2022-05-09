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
	int i, n;

	if (min > max)
		return (NULL);

	n = max - min + 1;
	p = malloc(sizeof(*p) * n);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < n; i++)
		p[i] = min++;

	return (p);
}
