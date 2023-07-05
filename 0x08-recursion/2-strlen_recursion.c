#include "main.h"

/**
 * _strlen_recursion - Returns the lenght of a string
 * @s: pointer variable
 * @i: Random variable
 *
 * Return lenght of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	if (*s != '\0')
	{
		i = _strlen_recursions(s + 1);
		i++;
	}

	return (i);
}
