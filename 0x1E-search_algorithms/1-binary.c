#include "search_algos.h"

/**
 * binary_search - search for a value by dividing the
 * searching space into half
 * @array: array of integers
 * @size: size of the array
 * @value: searched value
 * Return: index of searched value else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t l, h, i;
	int mid;

	l = 0;
	h = size - 1;

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
