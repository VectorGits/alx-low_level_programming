#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char leet;

	for (leet = 'z'; leet >= 'a'; leet--)
		putchar(leet);
	putchar('\n');
	return (0);
}
