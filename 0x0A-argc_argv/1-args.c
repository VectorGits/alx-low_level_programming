#include <stdio.h>

/**
 * main - function that prints the number of args passed into it
 * @args: argument counter
 * @argv: argument vector
 *
 * Return: return 0 (success)
 */
int main(int args, char *argv[])
{
	print("%d\n", args - 1);
	(void)argv;
	return (0);
}
