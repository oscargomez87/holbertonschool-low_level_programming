#!/usr/bin/python3
"""Module for task 5"""


def island_perimeter(grid):
    """Returns the perimeter"""

    perimeter = 0
    for idx1, val in enumerate(grid):
        for idx2 in range(len(val)):
            if grid[idx1][idx2] == 1:
                perimeter += 4
                if grid[idx1 - 1][idx2] == 1:
                    perimeter -= 1
                if grid[idx1 + 1][idx2] == 1:
                    perimeter -= 1
                if grid[idx1][idx2 - 1] == 1:
                    perimeter -= 1
                if grid[idx1][idx2 + 1] == 1:
                    perimeter -= 1
                if grid[idx1][idx2 + 1] == 0:
                    break
        print("{} per: {}".format(idx1, perimeter))
    return perimeter
