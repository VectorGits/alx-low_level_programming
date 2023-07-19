#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the name of file it was compiled from
 *
 * Return: 0
 */

int main(void)
{
	printf("File :%s\n", __FILE__);
	return (0);
}
