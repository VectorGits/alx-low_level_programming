#include "main.h"

/**
 * _islower - Checks for lowercase characters
 *
 * Return: Always 1 (Success)
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
