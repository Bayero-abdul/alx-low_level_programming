#include "search_algos.h"


/**
 * recursive_binary_search - implement advance binary search using recursion
 * @array: pointer to the first element of the array
 * @l: first index of the array
 * @h: last index of the array
 * @value: is the value to search for
 * Return: index of value else -1
 */

int recursive_binary_search(int *array, size_t l, size_t h, int value)
{
	size_t mid, i;

	if (l > h)
		return (-1);

	mid = l + (h - l) / 2;

	printf("Searching in array: ");
	for (i = l; i <= h; i++)
	{
		if (i == h)
			printf("%d\n", array[i]);
		else
			printf("%d, ", array[i]);
	}

	if (array[mid] == value && array[mid - 1] != value)
		return (mid);

	if (value > array[mid])
		return (recursive_binary_search(array, mid + 1, h, value));
	return (recursive_binary_search(array, l, mid, value));
}


/**
 * advanced_binary - implement advance binary search
 * @array: pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: index of value else -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	size_t l, h;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;
	return (recursive_binary_search(array, l, h, value));
}
