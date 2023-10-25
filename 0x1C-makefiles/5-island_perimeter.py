#!/usr/bin/python3

def island_perimeter(grid):
    """   width_list = []
    height = 0
    for list in grid:
        width_pot = 0
        for item in list:
            if item == 1:
                width_pot += 1
        width_list.append(width_pot)
        if width_pot:
            height += 1

    width = max(width_list)
    perimeter = (width + height) * 2

    return perimeter
"""
    width_list = []
    height = 0
    if len(grid) > 100 or any(len(row) > 100 for row in grid):
        raise ValueError("Grid dimensions exceed the maximum allowed (100x100).")

    for list in grid:
        width_calc = sum(list)
        width_list.append(width_calc)
        if width_calc:
            height += 1
    width = max(width_list)
    perimeter = (width + height) * 2

    return perimeter
