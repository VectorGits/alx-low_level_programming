#include "main.h"

/**
 * _strstr - Locates a substring
 * @haystack: String to search
 * @needle: Substring to search for
 * Description: Finds the first occurrence of the substring `needle` in the
 * string `haystack`. The terminating null bytes (`\0`) are not compared.
 * Return: Pointer to the beginning of the located substring, or `NULL` if the
 * substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n)
		{
			h++;
			n++;
		}

		if (!*n)
		{
			return (haystack);
		}

		haystack++;
	}

	return (NULL);
}
