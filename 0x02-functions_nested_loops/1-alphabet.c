#include "main.h"

/**
 * print alphabet - Check the description
 * Description: It prints the alphabets in lowercase followed by a new line
 * Return: void
 */

void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
