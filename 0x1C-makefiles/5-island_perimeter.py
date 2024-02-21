#!/usr/bin/python3
"""Module for island_perimeter and it's functions"""


def check_grid(grid):
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


def find_next(grid, x, y):
    """Return a dictionary with info about the cells around a coordinate"""

    compass = {"N": 0, "NE": 0, "E": 0, "SE": 0,
               "S": 0, "SW": 0, "W": 0, "NW": 0}
    # Check cells above (Northern)
    if x - 1 >= 0:
        # North
        if y < len(grid[x - 1]) and grid[x - 1][y] == 1:
            compass["N"] = 1

        # North-East
        if y + 1 < len(grid[x - 1]) and grid[x - 1][y + 1] == 1:
            compass["NE"] = 1

        # North-West
        if y - 1 >= 0 and grid[x - 1][y - 1] == 1:
            compass["NW"] = 1

    # Check cells below (Southern)
    if x + 1 < len(grid):
        # South
        if y < len(grid[x + 1]) and grid[x + 1][y] == 1:
            compass["S"] = 1

        # South-East
        if y + 1 < len(grid[x + 1]) and grid[x + 1][y + 1] == 1:
            compass["SE"] = 1

        # South-West
        if y - 1 >= 0 and grid[x + 1][y - 1] == 1:
            compass["SW"] = 1

    # Check cell on right (East)
    if y + 1 < len(grid[x]) and grid[x][y + 1] == 1:
        compass["E"] = 1

    # Check cell on the left (West)
    if y - 1 >= 0 and grid[x][y - 1] == 1:
        compass["W"] = 1

    return compass


def first_cell(grid, peri):
    """Mark a counter grid with the peri"""

    for x, row in enumerate(grid):
        for y, col in enumerate(row):
            if col:
                break
        else:
            del (y)

        if col:
            break
    else:
        del (x)

    try:
        compass = find_next(grid, x, y)
    except NameError:
        return

    for key, val in compass.items():
        if len(key) == 1 and val:
            break
    else:
        key = "N"

    return x, y, key


def explorer(grid, peri, x, y, dir):
    """Explore the grid in one direction while marking peri"""

    def path_split(frk, up, down):
        """Determine if there is a fork toward the given direction"""

        way = None
        if comp[frk]:
            if not (comp[frk + "E" if frk == "N" or frk == "S" else "N" + frk]
                    and comp[frk + "W" if frk == "N" or frk == "S" else "S" + frk]):
                if frk == "N":
                    up -= 1
                elif frk == "E":
                    down += 1
                elif frk == "S":
                    up += 1
                elif frk == "W":
                    down -= 1

                way = (up, down)

        return way

    cardinal = ["N", "E", "S", "W"]
    pop = cardinal.index(dir)
    comp = {dir: 1}
    while comp[dir] and 0 <= x < len(grid) and 0 <= y < len(grid[x]):
        comp = find_next(grid, x, y)
        for point in cardinal:
            if not comp[point]:
                if point == "N":
                    peri[x - 1][y] += 1
                elif point == "E":
                    peri[x][y + 1] += 1
                elif point == "S":
                    peri[x + 1][y] += 1
                elif point == "W":
                    peri[x][y - 1] += 1

        change = path_split(cardinal[(pop+1) % 4], x, y)
        if change:
            explorer(grid, peri, change[0], change[1],
                     cardinal[(pop+1) % 4])

        change = path_split(cardinal[(pop-1) % 4], x, y)
        if change:
            explorer(grid, peri, change[0], change[1],
                     cardinal[(pop-1) % 4])

        if dir == "N":
            x -= 1
        elif dir == "E":
            y += 1
        elif dir == "S":
            x += 1
        elif dir == "W":
            y -= 1


def island_perimeter(grid):
    """Calculate perimeter of an Island"""

    check_grid(grid)
    perimeter = [[0 for y in x] for x in grid]
    x, y, direction = first_cell(grid, perimeter)
    explorer(grid[:], perimeter, x, y, direction)

    total = 0
    for row in perimeter:
        for cel in row:
            total += cel

    return total


if __name__ == "__main__":
    grid = [
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 1, 1, 1, 0, 0],
        [0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0]
    ]

    print(island_perimeter(grid))
