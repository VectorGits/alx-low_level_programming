#include <unistd.h>
#include "holberton.h"

/**
 * main - Check description
 * Description: It prints _putchar, followed by a new line.
 *
 * Return: 0.
 */

int main(void)
{
	char word[8] = "_putchar";
	int i;

	for (i = 0; i < 9; i++)
		_putchar(word[i]);
	-putchar('\n');

	return (0);
}
