#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculates the perimeter of the island described in the grid.

    Args:
        grid (list[list[int]]): A rectangular grid representing the island.
                                 0 represents a water zone, and 1 represents a land zone.

    Returns:
        int: The perimeter of the island.

    Raises:
        ValueError: If the grid is empty or not rectangular.

    """
    if not grid or not all(len(row) == len(grid[0]) for row in grid):
        raise ValueError("Invalid grid")

    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for i in range(rows):
        for j in range(cols):
            if grid[i][j] == 1:
                # Count the perimeter of each land zone
                perimeter += 4
                if i > 0 and grid[i-1][j] == 1:
                    perimeter -= 2
                if j > 0 and grid[i][j-1] == 1:
                    perimeter -= 2

    return perimeter
