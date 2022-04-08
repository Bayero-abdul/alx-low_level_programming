#include <stdio.h>

/**
	* main - prints alphabets in lowercase except q & e
	*
	* Return: if it runs successfully
	*/
int main(void)
{
int start_lower, end_lower;

	start_lower = 96;
	end_lower = 122;
	while ((++start_lower) <= end_lower)
	{
		if (start_lower != 101 && start_lower != 113)
			putchar(start_lower);
	}
	putchar('\n');
	return (0);
}
