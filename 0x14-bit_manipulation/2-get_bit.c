#include "main.h"
/**
 * get_bit - This func gives the value of bit at given index.
 * @n: No to be printed in binary.
 * @index: index of bit value.
 *
 * Return: Value of index or (-1) if error occurs.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	if ((n & mask) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
