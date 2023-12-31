#include "main.h"

/**
 * print_diagsums - Prints the sum of the two diagonals of a square matrix of
 * integers
 * @a: Matrix of integers
 * @size: Size of the matrix
 * Description: Prints the sum of the two diagonals of a square matrix of
 * integers
 * Return: Nothing
 */

void print_diagsums(int *a, int size)
{
	int x, y, sum1 = 0, sum2 = 0;

	for (x = 0; x < size; x++)
	{
		sum1 += a[(size * x) + x];
		sum2 += a[(size * (x + 1)) - (x + 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
