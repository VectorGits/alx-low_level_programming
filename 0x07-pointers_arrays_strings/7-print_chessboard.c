#include "main.h"

/**
 * print_chessboard - Prints the chessboard
 * @a: Pointer to the chessboard
 * Description: Prints the chessboard.
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int x, y;

	for (x = 0; a[x][7]; x++)
	{
		for (y = 0; y < 8; y++)
		{
			putchar(a[x][y]);
		}
		putchar('\n');
	}
}
