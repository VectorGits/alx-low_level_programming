#include "main.h"

/**
 * _strcpy - Copies strings
 * @dest: destination
 * @src: source
 * Return: ALways pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(src + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
