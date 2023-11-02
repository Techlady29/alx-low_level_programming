#!/usr/bin/python3
"""Module that calculates the perimeter of an island in a grid."""


def num_water_neighbors(grid, a, f):
    """Returns the number of water neighbors a cell has in a grid."""

    num = 0

    if a <= 0 or not grid[a - 1][f]:
        num += 1
    if f <= 0 or not grid[a][f - 1]:
        num += 1
    if f >= len(grid[a]) - 1 or not grid[a][f + 1]:
        num += 1
    if a >= len(grid) - 1 or not grid[a + 1][f]:
        num += 1

    return num


def island_perimeter(grid):
    """This returns the perimeter of the island in grid."""

    perimeter = 0
    for a in range(len(grid)):
        for f in range(len(grid[a])):
            if grid[a][f]:
                perimeter += num_water_neighbors(grid, a, f)

    return perimeter
