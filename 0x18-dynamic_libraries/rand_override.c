#include <stdio.h>

/**
 * rand - rand function
 *
 * Return: 8
 */
int rand(void)
{
	static int i;
	int nums[6] = {9, 8, 10, 24, 75, 9};

	return (nums[i++ % 6]);
}
