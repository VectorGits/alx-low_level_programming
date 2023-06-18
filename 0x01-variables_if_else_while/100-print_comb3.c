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
	int d, p;

	for (d = 0; d <= 9; d++)
	{
		for (p = d + 1; p <= 9; p++)
		{
			putchar(d + '0');
			putchar(p + '0');
			if (d < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
