#include "search_algos.h"

/**
 * interpolation_search - search for a value by by making the
 * searching interval smaller
 * @array: array of integers
 * @size: size of the array
 * @value: searched value
 * Return: index of searched value else -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l, h, pos;

	l = 0;
	h = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= h && value >= array[l] && value <= array[h])
	{
		pos = l + (((double)(h - l) /
			(array[h] - array[l])) * (value - array[l]));

		printf("Value checked array[%ld] = [%d]\n", pos, array[pos]);

		if (value > array[pos])
			l = pos + 1;
		else if (value < array[pos])
			h = pos - 1;
		else
			return (pos);
	}

	pos = l + (((double)(h - l) /
		(array[h] - array[l])) * (value - array[l]));
	printf("Value checked array[%ld] is out of range\n", pos);
	return (-1);
}
