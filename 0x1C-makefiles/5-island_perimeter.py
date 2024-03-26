#!/usr/bin/python3
"""
Technical interview type challenge
"""

def island_perimeter(grid):
	"""
	Calculate the perimeter of an island in a grid.

	Args:
		grid (list): A 2D grid representing the island.

	Returns:
		int: The perimeter of the island.
	"""
	perimeter = 0
	for x in range(len(grid)):
		for y in range(len(grid[x])):
			if grid[x][y] == 1:
				perimeter += 4
				if x > 0 and grid[x - 1][y] == 1:
					perimeter -= 2
				if y > 0 and grid[x][y - 1] == 1:
					perimeter -= 2

	return perimeter