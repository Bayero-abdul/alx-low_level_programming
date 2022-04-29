#include "main.h"

/**
 * _pow_recursion - compute the value of x raised to the power of y
 * @x: base
 * @y: power
 * Return: returns the value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
if (y == 0)
{
return (1);
}
else if (y < 0)
{
return (-1);
}
y--;
return (x * _pow_recursion(x, y));
}
