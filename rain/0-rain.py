#!/usr/bin/python3
""" Rain """

def rain(walls) -> int:
    """ Rain """
    if walls is None:
        return 0
    if len(walls) == 0:
        return 0
    if len(walls) == 1:
        return 0
    rain = 0
    for i in range(1, len(walls) -1):
        left = walls[i]
        for j in range(i):
            left = max(left, walls[j])
        right = walls[i]
        for j in range(i + 1, len(walls)):
            right = max(right, walls[j])
        rain = rain + (min(left, right) - walls[i])
        return rain