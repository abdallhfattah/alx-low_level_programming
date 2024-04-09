#!/usr/bin/python3
"""Island perimeter measuring function."""


def island_perimeter(grid):
    """Return the perimiter of an island.

    water by 0 and land by 1.

    Args:
        grid (list): A list of list of integers representing an island.
    Returns:
        The perimeter of the island defined in grid.
    """
    width = len(grid[1])
    height = len(grid)
    num_edges = 0
    size = 0

    for i in range(height):
        for j in range(width):
            if grid[i][j] == 1:
                size += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    num_edges += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    num_edges += 1
    return size * 4 - num_edges * 2
