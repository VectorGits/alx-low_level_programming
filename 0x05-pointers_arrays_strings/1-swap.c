#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: as integer
 * @b: as integer
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int s = *a;
	*a = *b;
	*b = s;
}
