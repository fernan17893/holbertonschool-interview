#!/usr/bin/python3
"""
Minimum number of operations Copy All
and Paste neded to result in H
characters
"""


def minOperations(n):
    """
    Args:
        n: value input
        numbers: number of operations
    Return: the sum of all operations
    """

    if n < 2:
        return 0
    numbers = []
    i = 1
    while n != 1:
        i += 1
        while n % i == 0:
            n /= i
            numbers.append(i)
    return sum(numbers)
