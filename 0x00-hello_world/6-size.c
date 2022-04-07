#include <stdio.h>

/**
* main - this is the main function
*
* Return: 0 if the program runs without error
*/
int main(void)
{
	printf("Size of a char: %ld bytes(s)\n", sizeof(char));
	printf("Size of a int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld bytes(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ld bytes(s)\n", sizeof(float));
	return (0);
}
