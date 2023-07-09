#include <stdio.h>

/**
 * main - function that prints the number of args passed into it
 * @argc: argument counter
 * @argv: argument vector
 *
 * Return: return 0 (success)
 */
int main(int argc, char *argv[])
{
	print("%d\n", argc - 1);
	(void)argv;
	return (0);
}
