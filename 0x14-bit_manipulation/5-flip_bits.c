#include "main.h"
/**
 * flip_bits - This func returns the number of flips to change numbers.
 * @n: No to be printed in binary.
 * @index: index of bit value.
 *
 * Return: Value of index or (-1) if error occurs.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	int count = 0;

	mask = n ^ m;

	while (mask > 0)
	{
		if (mask & 1)
		{
			count++;
		}
		mask >>= 1;
	}
	return (count);
}

