#!/usr/bin/python3
"""UTF-8 Validation"""


def validUTF8(data):
    """
    Determines if a given data set represents a valid UTF-8 encoding.
    Args:
        data: A list of integers, where each integer represents 1 byte of data.
    Returns:
        True if data is a valid UTF-8 encoding, else return False.
    """

    # Check if the data set is empty.
    if not data:
        return False

    # Check if the first byte of the data set is a valid start byte.
    start_byte = data[0]
    if not (start_byte & 0x80 == 0):
        return False

    # Check the remaining bytes of the data set.
    for i in range(1, len(data)):
        byte = data[i]
        if not (byte & 0xC0 == 0x80):
            return False

    return True
