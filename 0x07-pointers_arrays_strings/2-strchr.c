#include "main.h"

/**
 * _strchr - Locates a character in a string
 * @s: String to search
 * @c: Character to locate
 * Description: Locates the first occurrence of character `c` in string `s`.
 * Return: Pointer to the first occurrence of `c` in `s`, or `NULL` if not
 *         found
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (NULL);
}
