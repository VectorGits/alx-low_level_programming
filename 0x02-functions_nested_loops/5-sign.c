#include "main.h"

/**
 * print_sign - print the sign of a number
 *
 *
 * Return: 1 if n > zero, 0 = zero, -1 < zero
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
