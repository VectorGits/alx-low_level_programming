#include "main.h"
/**
 * _length - checks the length of a string
 * @s: the string
 *
 * Return: return length of string
 */
int _length(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _length(s + 1));
}

/**
 * checkp - checks if the string is palindrome
 * @i: the Index
 * @lg: is the length of the string
 * @s: the string
 * Return: 1 if is palindrome or 0 if not
 */
int checkp(int i, int lg, char *s)
{
	if (lg > 0)
	{
		if (s[i] == s[lg])
		{
			return (checkp(i + 1, lg - 1, s));
		}
		else if (s[i] != s[lg])
		{
			return (0);
		}
		else
		{
			return (i);
		}
	}
	return (1);
}

/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string
 * Return: return 1 if the string is a palindrome or 0 otherwise
 */
int is_palindrome(char *s)
{
	return (checkp(0, _length(s) - 1, s));
}

