#!/usr/bin/python3
"""Module for task 5"""


def island_perimeter(grid):
    """Returns the perimeter"""

    perimeter = 0
    row = len(grid)
    col = len(grid[0])
    for r in range(row):
        for c in range(col):
            if grid[r][c] == 1:
                perimeter += 4
                if r > 0:
                    if grid[r - 1][c] == 1:
                        perimeter -= 1
                if r < (row - 1):
                    if grid[r + 1][c] == 1:
                       perimeter -= 1
                if c > 0:
                    if grid[r][c - 1] == 1:
                       perimeter -= 1
                if c < (col - 1):
                    if grid[r][c + 1] == 1:
                       perimeter -= 1
    return perimeter
