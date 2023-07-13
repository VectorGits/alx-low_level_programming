#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates memory of array using malloc
 * @nmemb: number of elements in an array
 * @size: size of elements in an array.
 *
 * Return: NULL is size or nmemb == 0.
 * NULL if malloc fails
 * Pointer to memory allocated if successful.
 */

void *_calloc(Unsigned int nmemb, insigned int int size)
{
	void *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		*((char *)(p) + i) = 0;
	}

	return (p);
}
