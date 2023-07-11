#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
* binary_search - searches for a value in a sorted
*                  array of integers
* @array: the array
* @size: size of the array
* @value: the target
*
* Return: the index of the target if found else -1
*/
int binary_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, mid, j;

	if (array == NULL)
		return (-1);

	while (lo <= hi)
	{
		printf("Searching in array: ");
		for (j = lo; j <= hi; j++)
		{
			printf("%d", array[j]);
			if (j != hi)
				printf(", ");
			else
				printf("\n");
		}

		mid = lo + (hi - lo) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}
	return (-1);
}
