#include "stdio.h"

/**
 * first - Prints message before main
 *
 * Return: Nuffin :^)
 */
void __attribute__ ((constructor)) first()
{
	printf("You're beat! and yet, you must allow, \\nI bore my house
			upon my back!\\n");
}
