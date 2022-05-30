#include "main.h"
#include <math.h>

/**
* get_bit - compute the value of a bit at a given index
* @n: number
* @index: the index, starting from 0 of the bit you want to get
* Return: the value of the bit at index index or -1 if an error occured
*/
int get_bit(unsigned long int n, unsigned int index)
{
	n = (n & (1 << index)) != 0;
	if (!n)
		return (-1);
	return (n);
}
