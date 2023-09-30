#include "main.h"
/**
 * get_endianess - This func sets the value of bit at given index to 1.
 * @n: No to be printed in binary.
 * @index: index of bit value.
 *
 * Return: 0 if big endian else 1.
 */
int get_endianess(void)
{
	unsigned int numx = 1;
	char *numx_ptr = (char *)&numx;

	return ((int)*numx_ptr);
}
