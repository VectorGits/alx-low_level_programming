#include "function_pointers.h"

/**
 * print_name = A function that prints a name
 *
 * @name: The input string
 * @f: The input function to print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (f != 0 && name != 0)
		f(name);
}
