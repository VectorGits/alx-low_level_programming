#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int d;
	char leet;

	for (d = '0'; d <= '9'; d++)
		putchar(d);
	for (leet = 'a'; leet <= 'f'; leet++)
		putchar(leet);
	putchar('\n');

	return (0);
}
