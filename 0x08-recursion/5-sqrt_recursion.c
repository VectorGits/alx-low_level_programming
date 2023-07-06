#include "main.h"
/**
 * _sqrt_recursion - Returns the natural sqaure root of a number
 * @n: Input number
 *
 * Return: square root of input
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (0);
	return (sqrt_recursion(n, i));
}
