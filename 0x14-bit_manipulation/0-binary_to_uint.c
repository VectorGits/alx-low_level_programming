#include "main.h"
/**
 * binary_to_uint - Converts bin to base_10 (int)
 * unsigned int.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0;
	int length, b_two;

	if (b == NULL)
		return (0);

	length = 0;
	while (b[length] != '\0')
	{
		if (b[length] != '0' && b[length] != '1')
			return (0);
		length++;
	}
}
