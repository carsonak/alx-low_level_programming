#!/usr/bin/python3
""""""


def check_grid(grid: list[list[int]]):
    """Check types and values of all grid items"""

    if type(grid) is not list:
        raise TypeError("grid must be a list")

    for row in grid:
        if type(row) is not list:
            raise TypeError("grid must be a list of lists")

        for cell in row:
            if type(cell) is not int:
                raise TypeError("Every cell must be an int")

            if cell != 0 and cell != 1:
                raise ValueError("Value of cell is out of range")


def draw_perimeter(grid: list[list[int]], perimeter: list[list[int]]):
    """"""

    

# 0 counting function
# Totalling function


def island_perimeter(grid):
    """"""

    check_grid(grid)


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    print(island_perimeter(grid))
