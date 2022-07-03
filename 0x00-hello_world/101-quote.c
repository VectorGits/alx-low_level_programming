#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 1 (+ve)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that peice of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
