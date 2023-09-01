#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all args a program recieves
 *
 * @argc: number of args
 * @argv: array of args
 * Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int n;

	for (n = 0; n < argc; n++)
	{
		printf("%s\n", argv[n]);
	}
	return (0);
}
