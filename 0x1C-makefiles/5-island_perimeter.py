#!/usr/bin/python3
"""Function island_perimeter(grid)"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid.

    Args:
        grid (list): grid
    """
    col, row = len(grid), len(grid[0])
    land, wat = 0, 0
    for i in range(col):
        for j in range(row):
            if grid[i][j] == 1:
                land += 1
                if i < col - 1 and grid[i+1][j] == 1:
                    wat += 1
                if j < row - 1 and grid[i][j + 1] == 1:
                    wat += 1
    return land * 4 - 2 * wat