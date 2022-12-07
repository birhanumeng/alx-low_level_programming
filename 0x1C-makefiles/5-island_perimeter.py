#!/usr/bin/python3
"""Defines a function for perimeter of island."""


def island_perimeter(grid):
    """returns perimeter of island."""
    count = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if(i != 0 and j != 0):
                if(grid[i][j] == 1):
                    count += 1
    return 2 * count + 2
