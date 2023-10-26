#include "main.h"
/**
 * print_binary - This func prints the binary representation of no.
 * @n: No to be printed in binary.
 *
 * Return: NULL.
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

