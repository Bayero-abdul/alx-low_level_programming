#include <stdio.h>

/**
* main - prints alphabets in lowercase in reverse order
*
* Return: if it runs successfully
*/
int main(void)
{
int start_lower, end_lower;

start_lower = 97;
end_lower = 122;
while (end_lower >= start_lower)
{
	putchar(end_lower);
	end_lower--;
}
putchar('\n');
return (0);
}
