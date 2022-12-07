#!/usr/bin/python3

def island_perimeter(grid):
    """finding the perimeter of island."""
    count = 0
    for i in range(len(grid) - 1):
        for j in range(len(grid[0]) - 1):
            if(i != 0 and j != 0):
                if(grid[i][j] == 1):
                    count += 1
    return 2 * count + 2
