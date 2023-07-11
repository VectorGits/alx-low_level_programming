#include <stdio.h>
#include <stdlib.h>

/**
 * main - Multiplies two numbers.
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: 0;
 */

int main (int argc, char *argv[])
{
	int index, mult;

	mult = 1;
	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	for (index =1; index < argc; index++)
	{
		mult *= atoi(argv[index]);
	}
	printf("%d\n", mult);
	return (0);
}
