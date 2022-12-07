#!/usr/bin/python3
"""Defines a function for perimeter of island."""


def island_perimeter(grid):
    """returns perimeter of island.

    The grid represents an island which is
    0 for water and 1 for land

    Args:
        grid: list of lists 0f 0 and 1 representing
              the island
    Returns: perimeter of the island
    """
    perimeter = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if(grid[i][j] == 1):
                perimeter += 4
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter -= 2
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter -= 2
    return perimeter
