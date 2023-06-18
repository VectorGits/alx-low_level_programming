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
	int d, p, q;

	for (d = 48; d < 58; d++)
	{
		for (p = 48; p < 58; p++)
		{
			if (p > d)
			{
				for (q = 48; q < 58; q++)
				{
					if (q > p)
					{
					putchar(d);
					putchar(p);
					putchar(q);
					if (d == 55 & p == 56 & q == 57)
					{
						break;
					}

					putchar(',');
					putchar(' ');
					}
				}
			}
		}
	}

	putchar('\n');
	return (0);
}
