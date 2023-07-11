#include <stdio.h>
#include "search_algos.h"


/**
* interpolation_search - searches for a value in a sorted
*                  array of integers
* @array: the array
* @size: size of the array
* @value: the target
*
* Return: the index of the target if found else -1
*/


int interpolation_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = size - 1, mid;

	if (array == NULL)
		return (-1);

	while ((array[lo] != array[hi]) && (value >= array[lo]) &&
	       (value <= array[hi]))
	{
		mid = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
			    (value - array[lo]));

		printf("Value checked array[%ld] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}

	if (array[lo] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
		return (lo);
	}

	mid = lo + (((double)(hi - lo) / (array[hi] - array[lo])) *
		    (value - array[lo]));
	printf("Value checked array[%ld] is out of range\n", mid);

	return (-1);
}
