#include "main.h"

/**
 * main - A program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name
 * without having to recompile
 * You should'nt remove the path before the name of program
 *
 * @argc: Argument count
 * @argv: Argument Vector
 *
 * Return: returns 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}

