#include "main.h"
/**
 * set_bit - This func sets the value of bit at given index to 1.
 * @n: No to be printed in binary.
 * @index: index of bit value.
 *
 * Return: Value of index or (-1) if error occurs.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = 1UL << index;

	*n = *n | mask;
}