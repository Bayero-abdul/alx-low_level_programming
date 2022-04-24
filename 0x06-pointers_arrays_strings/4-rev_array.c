#include "main.h"

/**
* reverse_array - reverse an array
* @a: pointer to the address of
* first element in the array
* @n: number of elements in an array
*/
void reverse_array(int *a, int n)
{
	int i, j, key;

	for (i = 1; i < n; i++)
	{
		key = a[i];
		j = i - 1;

		while (j >= 0 && a[j] < key)
		{
			a[j + 1] = a[j];
			j--;
		}
		a[j + 1] = key;
	}
}
