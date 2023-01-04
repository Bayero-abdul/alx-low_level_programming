#include "search_algos.h"
#include <math.h>

#define MIN(a, b) (a < b ? a : b)

/**
 * jump_search - searches for value by dividing the search space into
 * blocks
 * @array: array of integers
 * @size: size of the array
 * @value: value to search
 * Return: index of value else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, low, high, min;

	step = sqrt(size);

	if (array == NULL)
		return (-1);

	for (low = high = 0; high < size && array[high] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", high, array[high]);
		low = high;
		high += step;

	}
	printf("Value found between indexes [%ld] and [%ld]\n", low, high);/
	
	min = high < size - 1 ? high : size - 1;
	while (low < min && array[low] < value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		low++;
	}

	if (array[low] == value)
	{
		printf("Value checked array[%ld] = [%d]\n", low, array[low]);
		return (low);
	}
	return (-1);
}
