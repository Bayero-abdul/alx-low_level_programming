#include "main.h"

/**
* reverse_array - reverse an array
* @a: pointer to the address of
* first element in the array
* @n: number of elements in an array
*/
void reverse_array(int *a, int n)
{
	int i, tmp;

	i = 0;

	for (; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}
