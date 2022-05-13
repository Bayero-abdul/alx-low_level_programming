#include <stdio.h>
#include "function_pointers.h"

/**
*	int_index - Searches for an integer
* @array: array to search in
* @size: size of the array
* @cmp: compare function
* Return: returns the index of the first element for
* which the cmp function does not return 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	 int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	i = 0;
	while (i < size)
	{
		if (cmp(array[i]) != 0)
			return (i);
		i++;
	}

	return (-1);
}
