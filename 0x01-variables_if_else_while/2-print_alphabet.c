#include <stdio.h>

/**
* main - prints alphabets in lowercase
*
* Return: if it runs successfully
*/
int main(void)
{
	int start, end;

	start = 96;
	end = 122;
	while ((++start) <= end)
	{
		putchar(start);
	}
	return (0);
}
