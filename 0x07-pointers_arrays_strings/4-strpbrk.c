#include "main.h"

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to search
 * @accept: Set of bytes to search for
 * Description: Locates the first occurrence in the string `s` of any of the
 * bytes in the string `accept`. Returns a pointer to the byte in `s` that
 * matches one of the bytes in `accept`, or `NULL` if no such byte is found.
 * Return: Pointer to the byte in `s` that
 * matches one of the bytes in `accept`,
 * or `NULL` if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	char *x;

	while (*s)
	{
		for (x = accept; *x; x++)
		{
			if (*s == *x)
			{
				return (s);
			}
		}

		s++;
	}
	return (NULL);
}
