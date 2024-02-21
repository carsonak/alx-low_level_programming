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


def find_next(grid: list[list[int]], x: int, y: int) -> dict[str, int]:
    """Marks which cells around a given coordinate are filled"""

    compass = {"N": 0, "NE": 0, "E": 0, "SE": 0,
               "S": 0, "SW": 0, "W": 0, "NW": 0}
    # Check cells above (Northern)
    if x - 1 >= 0:
        # North
        if y < len(grid[x - 1]) and grid[x - 1][y]:
            compass["N"] = 1

        # North-East
        if y + 1 < len(grid[x - 1]) and grid[x - 1][y + 1]:
            compass["NE"] = 1

        # North-West
        if y - 1 >= 0 and grid[x - 1][y - 1]:
            compass["NW"] = 1

    # Check cells below (Southern)
    if x + 1 < len(grid):
        # South
        if y < len(grid[x + 1]) and grid[x + 1][y]:
            compass["S"] = 1

        # South-East
        if y + 1 < len(grid[x + 1]) and grid[x + 1][y + 1]:
            compass["SE"] = 1

        # South-West
        if y - 1 >= 0 and grid[x + 1][y - 1]:
            compass["SW"] = 1

    # Check cell on right (East)
    if y + 1 < len(grid[x]) and grid[x][y + 1]:
        compass["E"] = 1

    # Check cell on the left (West)
    if y - 1 >= 0 and grid[x][y - 1]:
        compass["W"] = 1

    return compass


def draw_perimeter(grid: list[list[int]], perimeter: list[list[int]]):
    """"""

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

    explorer(grid, x, y, perimeter, key)


def explorer(grid: list[list[int]], x: int, y: int,
             perimeter: list[list[int]], dir: str):
    """Moves in only one direction, will call itself recursively to explore other directions"""

    def path_split(path, up, down):
        """Checks if path is a path"""

        way = None
        if comp[path]:
            if not comp[path + "E" if path == "N" or path == "S" else "N" + path]\
                    and not comp[path + "W" if path == "N" or path == "S" else "S" + path]:
                if path == "N":
                    up -= 1
                elif path == "E":
                    down += 1
                elif path == "S":
                    up += 1
                elif path == "W":
                    down -= 1

                way = (up, down)

        return way

    cardinal = ["N", "E", "S", "W"]
    # cad_8 = ["N", "NE", "E", "SE", "S", "SW", "W", "NW"]
    pop = cardinal.index(dir)
    comp = {dir: 1}
    while comp[dir] and 0 <= x < len(grid) and 0 <= y < len(grid[x]):
        comp = find_next(grid, x, y)
        for point in cardinal:
            if not comp[point]:
                if point == "N":
                    perimeter[x - 1][y] += 1
                elif point == "E":
                    perimeter[x][y + 1] += 1
                elif point == "S":
                    perimeter[x + 1][y] += 1
                elif point == "W":
                    perimeter[x][y - 1] += 1

        change = path_split(cardinal[(pop+1) % 4], x, y)
        if change:
            explorer(grid, change[0], change[1],
                     perimeter, cardinal[(pop+1) % 4])

        change = path_split(cardinal[(pop-1) % 4], x, y)
        if change:
            explorer(grid, change[0], change[1],
                     perimeter, cardinal[(pop-1) % 4])

        if dir == "N":
            x -= 1
        elif dir == "E":
            y += 1
        elif dir == "S":
            x += 1
        elif dir == "W":
            y -= 1


def island_perimeter(grid):
    """"""

    check_grid(grid)
    peri = [[0 for y in x] for x in grid]
    draw_perimeter(grid, peri)
    total = 0
    for row in peri:
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
