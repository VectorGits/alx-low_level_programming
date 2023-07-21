#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Prints a name
 *
 * @name: The input string
 * @f: The input function to print the name
 *
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
