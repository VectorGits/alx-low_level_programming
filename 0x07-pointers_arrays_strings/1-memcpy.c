#include "main.h"

/**
 * _memcpy - Copies memory area
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 * Description: Copies `n` bytes from memory area `src` to memory area `dest`.
 * Return: Pointer to `dest`
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
