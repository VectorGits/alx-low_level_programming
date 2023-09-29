#include "main.h"
/**
 * get_bit - This func gives the value of bit at given index.
 * @n: No to be printed in binary.
 *
 * Return: Value of error or (-1) if error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int n;
	unsigned int index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	unsigned long int mask = 1 << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
