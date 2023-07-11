#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: First string
 * @s2: Second string
 *
 * Return: NULL (failure) treat as empty string.
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len1, len2, size, x, y;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = 0;
	while (s1[len1] != '\0')
		len1++;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;

	size = len1 + len2;

	nstr = malloc((sizeof(char) * size) + 1);
	/* Verify the success of memory allocation using malloc */
	if (nstr == NULL)
		return (NULL);

	x = 0;
	while (x < len1)
	{
		nstr[x] = s1[x];
		x++;
	}
	y = 0;
	while (x <= size)
	{
		nstr[x] = s2[y];
		x++;
		y++;
	}
	return (nstr);
}
