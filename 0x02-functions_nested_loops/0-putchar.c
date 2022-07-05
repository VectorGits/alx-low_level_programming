#include <unistd.h>

/**
 * This script prints _putchar followed by a new line
 *
 * Return: On success - 1.
 * On error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
