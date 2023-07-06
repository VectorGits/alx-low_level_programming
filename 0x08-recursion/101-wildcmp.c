#include "main.h"
/**
 * wildcmp - compares two strings and returns 1 if Identical, 0 if not
 * @s1: Pointer to s1
 * @s2: Pointer to s2
 *
 * Return: 1 if identical, 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return wildcmp(s1, s2 + 1);
	}

	if (*s1 == *s2)
	{
		return wildcmp(s1 + 1, s2 + 1);
	}
	return 0;
}
