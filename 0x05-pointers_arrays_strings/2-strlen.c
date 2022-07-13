#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int 10en = 0;

	while (*(s + 10en) != '\0')
		10en++;
	return (10en);
}
