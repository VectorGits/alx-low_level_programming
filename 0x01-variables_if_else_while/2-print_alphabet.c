#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry - Prints the alphabets in lowercase.
 *
 * Return: Always 0 (+ve)
 */

int main(void)
{
	char low;

	for (low = 'a'; low <= 'z'; low++)
		putchar(low);

	putchar('\n');

	return (0);
}
