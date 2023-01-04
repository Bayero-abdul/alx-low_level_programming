#include "search_algos.h"


/**
 * exponential_search - search for a value by bound exponentially
 * and making sure the value is within the bound/2 and bound + 1
 * @array: array of integers
 * @size: size of the array
 * @value: searched value
 * Return: index of searched value else -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t l, h, i, bound, mid;

	if (array == NULL)
		return (-1);

	bound = 1;
	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	l = bound / 2;
	h = bound < size ? bound : size - 1;

	printf("Value found between indexes [%ld] and [%ld]\n", l, h);

	while (l <= h)
	{
		mid = (l + h) / 2;
		printf("Searching in array: ");

		for (i = l; i <= h; i++)
		{
			if (i == h)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}

		if (value > array[mid])
			l = mid + 1;
		else if (value < array[mid])
			h = mid - 1;
		else
			return (mid);
	}
	return (-1);
}
