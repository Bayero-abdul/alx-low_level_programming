#include "main.h"
#include <stdio.h>

/**
* print_last_digit - Prints the last digit of a number
* @n: is the number
*
* Return: the value of the last digit
*/
int print_last_digit(int n)
{
	int last_digit;
	printf("value of n from call --> %d\n", n);
	`last_digit = n % 10;
  printf("value of last digit using putchar --> ");
	_putchar(last_digit);
	printf("\n");
	printf("value of last digit using printf --> %d\n", last_digit);

	return (0);
}
