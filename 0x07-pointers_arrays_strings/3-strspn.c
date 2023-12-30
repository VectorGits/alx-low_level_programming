#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: String to search
 * @accept: Bytes to accept
 * Description: Calculates the length (in bytes) of the initial segment of `s`
 * which consists entirely of bytes in `accept`.
 * Return: Number of bytes in the initial segment of `s` which consist only of
 * bytes from `accept`.
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		for (a = accept; *a; a++)
		{
			if (*s == *a)
			{
				count++;
				break;
			}
		}

		if (!*a)
		{
			return (count);
		}

		s++;
	}

	return (count);
}
