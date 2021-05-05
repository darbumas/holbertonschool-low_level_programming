#!/usr/bin/python3
"""
Module defines a how to calculate the parameter of an island
"""


def island_perimeter(grid):
    """ƒ() returns the parameter of an island"""
    param = 0

    for row in range(0, len(grid)):
        for col in range(0, len(grid[row])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    param += 1
                if col == 0 or grid[row][col - 1] == 0:
                    param += 1
                if col + 1 == len(grid[row]) or grid[row][col + 1] == 0:
                    param += 1
                if row + 1 == len(grid) or grid[row + 1][col] == 0:
                    param += 1
    return param
