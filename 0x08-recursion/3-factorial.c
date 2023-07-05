#include "main.h"
/**
 * factorial - Returns the factorial of a given number
 * @n: Random Integer
 *
 * Return: Factorial of n
 */
int factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}

	return n * factorial(n - 1);
}
