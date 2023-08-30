#include "main.h"
/**
 * _pow_recursion - Returns the value of x raised to the power of y
 * @x: First variable
 * @y: Second variable
 *
 * Return: x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}

