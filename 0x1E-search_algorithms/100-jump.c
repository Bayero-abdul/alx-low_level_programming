#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - searches for a value in a sorted
*                  array of integers
* @array: the array
* @size: size of the array
* @value: the target
*
* Return: the index of the target if found else -1
*/
int jump_search(int *array, size_t size, int value)
{
	size_t lo = 0, hi = 0, j, min_hi;
	size_t step = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[hi] < value && hi < size)
	{
		printf("Value checked array[%ld] = [%d]\n", hi, array[hi]);
		lo = hi;
		hi += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);

	min_hi = hi < size - 1 ? hi : size - 1;
	while (lo < min_hi && array[lo] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
		lo++;
	}

	if (array[lo] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
		return (lo);
	}

	printf("Value checked array[%ld] = [%d]\n", lo, array[lo]);
	return (-1);
}
