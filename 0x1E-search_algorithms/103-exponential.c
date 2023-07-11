#include <stdio.h>
#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * @array: holds element
 * @size: size of the array
 * @value: target value
 *
 * Return: return the first index where value is located else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1, lo, hi, mid, i;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	lo = bound / 2;
	hi = size - 1 < bound ? size - 1 : bound;

	printf("Value found between indexes [%ld] and [%ld]\n", lo, hi);

	while (lo <= hi)
	{
		printf("Searching in array: ");
		for (i = lo; i <= hi; i++)
		{
			printf("%d", array[i]);
			if (i != hi)
				printf(", ");
			else
				printf("\n");
		}

		mid = lo + (hi - lo) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			lo = mid + 1;
		else
			hi = mid - 1;
	}

	return (-1);
}
