#!/usr/bin/python3
"""
5-island_perimeter
"""


def island_perimeter(grid):
    """Returns the perimeter of an island

    Args:
        grid(list): A list of list of itegers - 0 and 1.
                    where 0 represents water, and 1 island
    """
    width = len(grid[0])
    height = len(grid)
    no_cells = 0
    no_touching_sides = 0
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:
                no_cells += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    no_touching_sides += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    no_touching_sides += 1
    perimeter = no_cells * 4 - no_touching_sides * 2
    return perimeter
