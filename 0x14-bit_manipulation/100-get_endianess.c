#include "main.h"
/**
 * get_endianess - This func sets the value of bit at given index to 1.
 * @n: No to be printed in binary.
 * @index: index of bit value.
 *
 * Return: Value of index or (-1) if error occurs.
 */
int get_endianess(void)
{
	unsigned int numx = 1;
	char *numx_ptr = (char *)&numx;

	if (*numx_ptr)
	{
		return (1); /*Lil endian*/
	}
	return (0); /*Big endian*/
}