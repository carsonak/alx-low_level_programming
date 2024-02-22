#!/usr/bin/python3
"""Module for island_perimeter and it's functions"""


def check_grid(grid, cell_type, cell_range=None):
    """
    Check types and values of all grid items

    Args:
        grid (list[list[any]]): a 2d array
        cell_type (class): the class type of the objects in the lists
        cell_range (tuple): a tuple with the max and min values of a cell

    Exceptions:
        TypeError: Raised if grid is not a list of lists of ints
        ValueError: Raised if value of a cell is out of range
    """

    if type(grid) is not list:
        raise TypeError("grid must be a list of lists")

    for row in range(len(grid)):
        if type(grid[row]) is not list:
            raise TypeError("grid must be a list of lists")

        for col in range(len(grid[row])):
            if type(grid[row][col]) is not cell_type:
                raise TypeError(f"cell[{row}][{col}] is not type {cell_type}")

            if cell_range and not (cell_range[0] <= grid[row][col] <= cell_range[1]):
                raise ValueError(
                    f"Value of cell[{row}][{col}] is out of range")


def find_next(grid, x, y):
    """
    Return a dictionary with info about the cells around a coordinate

    Args:
        grid (list[list[int]]): a 2d array of ints representing an island
        x (int): x axis of the current cell
        y (int): y axis of the current cell

    Return:
        A dictionary of 8 compass headings each representing a cell adjacent to
        the current one and marked if viable path or not
    """

    compass = {"N": 0, "NE": 0, "E": 0, "SE": 0,
               "S": 0, "SW": 0, "W": 0, "NW": 0}
    # Check cells above (Northern)
    if x - 1 >= 0:
        # North
        if y < len(grid[x - 1]):
            compass["N"] = grid[x - 1][y]

        # North-East
        if y + 1 < len(grid[x - 1]):
            compass["NE"] = grid[x - 1][y + 1]

        # North-West
        if y - 1 >= 0:
            compass["NW"] = grid[x - 1][y - 1]

    # Check cells below (Southern)
    if x + 1 < len(grid):
        # South
        if y < len(grid[x + 1]):
            compass["S"] = grid[x + 1][y]

        # South-East
        if y + 1 < len(grid[x + 1]):
            compass["SE"] = grid[x + 1][y + 1]

        # South-West
        if y - 1 >= 0:
            compass["SW"] = grid[x + 1][y - 1]

    # Check cell on right (East)
    if y + 1 < len(grid[x]):
        compass["E"] = grid[x][y + 1]

    # Check cell on the left (West)
    if y - 1 >= 0:
        compass["W"] = grid[x][y - 1]

    return compass


def first_cell(grid):
    """
    Find the first marked cell in the grid

    Args:
        grid (list[list[int]]): a 2d array of ints representing an island

    Return:
        Coordinates of the first cell and a compass heading for the next cell
    """

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

    for hed, val in compass.items():
        if len(hed) == 1 and val:
            break
    else:
        hed = "N"

    return x, y, hed


def explorer(grid, peri, x, y, heading):
    """
    Explore the grid (island) along one axis while marking peri (perimeter)

    Args:
        grid (list[list[int]]): a 2d array of ints representing an island
        peri (list[list[int]]): a 2d array of ints used to mark the perimeter
            of the island
        x (int): x axis of the starting cell
        y (int): y axis of the starting cell
        heading (str): a string representing one of the 4 cardinal points of a
            compass and the current direction of travel

    Functions:
        path_split: finds forks along the path
    """

    def path_split(splt, x_ax, y_ax):
        """
        Determine if there is a fork in the given heading

        Args:
            splt (str): The compass heading to check
            x_ax (int): Current value of the x axis
            y_ax (int): Current value of the y axis

        Return:
            A tuple of the of the cell to divert to if fork is found else none
        """

        way = None
        if compass[splt]:
            if not (compass[splt + "E" if splt == "N" or splt == "S" else "N" + splt]
                    and compass[splt + "W" if splt == "N" or splt == "S" else "S" + splt]):
                if splt == "N":
                    x_ax -= 1
                elif splt == "E":
                    y_ax += 1
                elif splt == "S":
                    x_ax += 1
                elif splt == "W":
                    y_ax -= 1

                if grid[x_ax][y_ax] == 1:
                    way = (x_ax, y_ax)

        return way

    def print_islands():
        print("{: <18s}\t{: <18s}\n{: <18s}\t{: <18s}".format(
            "Island map", "Perimeter map",
            ("-" * len("Island map")), ("-" * len("Perimeter map"))))

        for row in range(len(grid)):
            print(f"{grid[row]}\t{peri[row]}")
        else:
            print("")

    cardinal = ["N", "E", "S", "W"]
    pop = cardinal.index(heading)
    compass = {heading: grid[x][y]}

    while compass[heading] == 1 and 0 < x < len(grid) - 1 and 0 < y < len(grid[x]) - 1:
        compass = find_next(grid, x, y)  # Map adjacent cells
        grid[x][y] += 1  # Mark explored cell

        for point in cardinal:
            if not compass[point]:  # Mark perimeter
                if point == "N":
                    peri[x - 1][y] += 1
                    # print_islands()
                elif point == "E":
                    peri[x][y + 1] += 1
                    # print_islands()
                elif point == "S":
                    peri[x + 1][y] += 1
                    # print_islands()
                elif point == "W":
                    peri[x][y - 1] += 1
                    # print_islands()

        divert = path_split(cardinal[(pop+1) % 4], x, y)
        if divert:
            explorer(grid, peri, divert[0], divert[1], cardinal[(pop+1) % 4])

        divert = path_split(cardinal[(pop-1) % 4], x, y)
        if divert:
            explorer(grid, peri, divert[0], divert[1], cardinal[(pop-1) % 4])

        if heading == "N":
            x -= 1
        elif heading == "E":
            y += 1
        elif heading == "S":
            x += 1
        elif heading == "W":
            y -= 1

        compass = {heading: grid[x][y]}


def island_perimeter(grid):
    """
    Calculate perimeter of an Island

    Args:
        grid (list[list[int]]): a 2d array of ints representing an island
    """

    check_grid(grid, int, (0, 1))
    perimeter = [[0 for y in x] for x in grid]
    x, y, heading = first_cell(grid)
    explorer(grid[:], perimeter, x, y, heading)

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
