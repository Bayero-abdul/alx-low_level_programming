#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* alloc_grid - initialize a 2 dimensional array of integers
* to 0
* @width: number of columns
* @height: number of rows
* Return: returns a pointer to a 2 dimensional array of integers
*/
int **alloc_grid(int width, int height)
{
	int i, j;
	int **p;

	if (width <= 0 || height <= 0)
		return (NULL);

	p = malloc(height * sizeof(int *));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < width; i++)
	{
		p[i] = malloc(width * sizeof(int));

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(p[i]);
			}
			free(p);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = 0;
		}
	}

	return (p);
}
