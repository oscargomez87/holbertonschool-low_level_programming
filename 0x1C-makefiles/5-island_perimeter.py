#!/usr/bin/python3
"""Module for task 5"""


def island_perimeter(grid):
    """Returns the perimeter"""

    perimeter = 0
    x = 0
    y = 0
    for idx1, val in enumerate(grid):
        for idx2 in range(len(val)):
            if grid[idx1][idx2] == 1:
                if grid[idx1 - 1][idx2] == 1 and grid[idx1][idx2 + 1]:
                    x += 1
                    y += 1
                    continue
                if grid[idx1][idx2 + 1] == 1 or grid[idx1][idx2 - 1] == 1:
                    x += 1
                    continue
                y += 1
                break
    perimeter = (2 * x) + (2 * y)
    return perimeter
