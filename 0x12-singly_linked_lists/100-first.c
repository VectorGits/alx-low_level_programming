#include <stdio.h>

/**
 * first - Prints message before main
 *
 * Return: Nuffin :^)
 */
void first() __attribute__((constructor));

void first()
{
	printf("You're beat! and yet, you must allow");
	printf(", \nI bore my house upon my back!\n");
}
