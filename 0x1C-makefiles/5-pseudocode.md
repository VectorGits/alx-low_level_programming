## Pseudocode

1. Initialize a variable `perimeter` to 0. This will keep track of the total perimeter of the island.

2. Loop over each cell in the grid. You can do this with nested loops: an outer loop for each row and an inner loop for each column. Let's call the current row `x` and the current column `y`.

3. Inside the inner loop, check if the current cell `(grid[i][j])` is land (i.e., its value is 1).

4. If the current cell is not land, skip to the next cell.

5. If the current cell is land, add 4 to `perimeter`. This is because a land cell contributes up to 4 to the perimeter: one for each of its four sides.

6. Check the cell to the left of the current cell (i.e., `grid[i][j-1])`. If it's within the grid and it's land, subtract 2 from `perimeter`. This is because this cell shares a side with the current cell, so we've overcounted the perimeter by 2.

7. Check the cell above the current cell (i.e., `grid[i-1][j]`). If it's within the grid and it's land, subtract 2 from `perimeter` for the same reason.

8. After the loops finish, `perimeter` will be the total perimeter of the island.

9. Return `perimeter`.

----

> This algorithm works by counting all the sides of the land cells, then subtracting the sides that are shared with other land cells. It takes advantage of the fact that the grid is surrounded by water and there are no lakes, so every side of a land cell that's not shared with another land cell is part of the perimeter.