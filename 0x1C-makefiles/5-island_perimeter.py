#!/usr/bin/python3
"""
module for Perimeter of the Island
"""


def island_perimeter(grid):
    """returns the Perimeter of the Island
    Args:
         grid (list) = list of integers
    """

    width = len(grid[0])
    height = len(grid)
    edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                # checking for boundery or a lake
                if (j > 0 and grid[i][j - 1] == 1):
                    edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    edges += 1
    return size * 4 - edges * 2
