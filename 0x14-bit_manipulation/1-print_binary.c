#include "main.h"
/**
 * print_binary - Prints the binary representation of a number.
 * @n: Number to be printed in binary.
 *
 * Return: Nothing.
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	int flag = 0;

	mask <<= (sizeof(unsigned long int) * 8 - 1);

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	while (mask > 0)
	{
		if ((n & mask) == 0 && flag == 1)
			_putchar('0');
		else if ((n & mask) != 0)
		{
			_putchar('1');
			flag = 1;
		}
		mask >>= 1;
	}
}

