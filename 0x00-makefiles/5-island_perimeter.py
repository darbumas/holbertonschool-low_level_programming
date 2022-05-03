#!/usr/bin/python3
"""
Module defines a ƒ() for calculating the perimeter of an island
"""


def island_perimeter(grid):
    """ƒ() returns the parameter of an island"""
    p = 0

    for row in range(0, len(grid)):
        for col in range(0, len(grid[row])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    p += 1
                if col == 0 or grid[row][col - 1] == 0:
                    p += 1
                if col + 1 == len(grid[row]) or grid[row][col + 1] == 0:
                    p += 1
                if row + 1 == len(grid) or grid[row + 1][col] == 0:
                    p += 1
    return p
