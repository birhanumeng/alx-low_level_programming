#!/usr/bin/python3
"""Defines a function for perimeter of island."""


def island_perimeter(grid):
    """returns perimeter of island."""
    size = 0
    neighbor = 0
    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if(grid[i][j] == 1):
                size += 1
                if(i > 0 and grid[i - 1][j] == 1):
                    neighbor += 1
                if(j > 0 and grid[i][j - 1] == 1):
                    neighbor += 1
    return size * 4 - neighbor * 2
