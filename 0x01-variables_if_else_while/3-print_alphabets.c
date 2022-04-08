#include <stdio.h>

/**
	* main - prints alphabets in lowercase and uppercase
	*
	* Return: if it runs successfully
	*/
int main(void)
{
	int start_lower, end_lower, start_upper, end_upper;

	start_lower = 96; 
	end_lower = 122; 
	start_upper = 64; 
	end_upper = 90;
	while ((++start_lower) <= end_lower)
	{
		putchar(start_lower);
	}
	while ((++start_upper) <= end_upper)
	{
		putchar(start_upper);	
	}
	putchar('\n');
	return (0);
}
