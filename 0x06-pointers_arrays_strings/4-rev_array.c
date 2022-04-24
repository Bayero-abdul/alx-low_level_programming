#include "main.h"

/**
* reverse_array - reverse an array
* @a: pointer to the address of
* first element in the array
* @n: number of elements in an array
*/
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < (n - 1 - i); j++)
		{
			if (a[j] < a[j + 1])
				swap_int(&a[j], &a[j + 1]);
		}
	}
}


/**
* swap_int - swap value of two integers
* @a: first integer
* @b: second integer
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
